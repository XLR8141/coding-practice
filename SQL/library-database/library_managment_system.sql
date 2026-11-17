-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 11, 2026 at 12:00 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `library_managment_system`
--

-- --------------------------------------------------------

--
-- Table structure for table `author`
--

CREATE TABLE `author` (
  `author_id` int(11) NOT NULL,
  `author_name` varchar(50) DEFAULT NULL,
  `author_origin` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `author`
--

INSERT INTO `author` (`author_id`, `author_name`, `author_origin`) VALUES
(1, 'Paulo Coelho', 'Brazil'),
(2, 'Stephen King', 'USA'),
(3, 'Malala Yousafzai', 'Pakistan'),
(4, 'J.K. Rowling', 'UK'),
(5, 'Arundhati Roy', 'India'),
(6, 'Haruki Murakami', 'Japan'),
(7, 'George Orwell', 'UK'),
(8, 'Isabel Allende', 'Chile'),
(9, 'Yuval Noah Harari', 'Israel'),
(10, 'Dan Brown', 'USA');

-- --------------------------------------------------------

--
-- Table structure for table `book`
--

CREATE TABLE `book` (
  `book_id` int(11) NOT NULL,
  `title` varchar(50) DEFAULT NULL,
  `author_id` int(11) DEFAULT NULL,
  `publisher_id` int(11) DEFAULT NULL,
  `genre_id` int(11) DEFAULT NULL,
  `book_status` varchar(50) DEFAULT 'available'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `book`
--

INSERT INTO `book` (`book_id`, `title`, `author_id`, `publisher_id`, `genre_id`, `book_status`) VALUES
(1, 'The Alchemist', 1, 1, 1, 'available'),
(2, 'It', 2, 3, 8, 'available'),
(3, 'I Am Malala', 3, 2, 3, 'available'),
(4, 'Harry Potter', 4, 4, 2, 'available'),
(5, 'The God of Small Things', 5, 5, 1, 'available'),
(6, 'Kafka on the Shore', 6, 6, 1, 'available'),
(7, '1984', 7, 7, 1, 'available'),
(8, 'The House of the Spirits', 8, 8, 1, 'available'),
(9, 'Sapiens', 9, 9, 4, 'available'),
(10, 'The Da Vinci Code', 10, 10, 7, 'available');

-- --------------------------------------------------------

--
-- Table structure for table `borrow_record`
--

CREATE TABLE `borrow_record` (
  `borrow_id` int(11) NOT NULL,
  `member_id` int(11) DEFAULT NULL,
  `book_id` int(11) DEFAULT NULL,
  `borrow_date` date DEFAULT NULL,
  `due_date` date DEFAULT NULL,
  `return_date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `borrow_record`
--

INSERT INTO `borrow_record` (`borrow_id`, `member_id`, `book_id`, `borrow_date`, `due_date`, `return_date`) VALUES
(1, 1, 1, '2024-02-01', '2024-02-15', NULL),
(2, 2, 2, '2024-02-03', '2024-02-17', '2024-02-16'),
(3, 3, 3, '2024-02-05', '2024-02-19', NULL),
(4, 4, 4, '2024-02-08', '2024-02-22', '2024-02-20'),
(5, 5, 5, '2024-02-10', '2024-02-24', NULL),
(6, 6, 6, '2024-02-12', '2024-02-26', NULL),
(7, 7, 7, '2024-02-14', '2024-02-28', '2024-02-27'),
(8, 8, 8, '2024-02-15', '2024-03-01', NULL),
(9, 9, 9, '2024-02-16', '2024-03-02', NULL),
(10, 10, 10, '2024-02-18', '2024-03-04', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `branch`
--

CREATE TABLE `branch` (
  `branch_id` int(11) NOT NULL,
  `branch_name` varchar(50) DEFAULT NULL,
  `branch_location` varchar(100) DEFAULT NULL,
  `branch_contactno` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `branch`
--

INSERT INTO `branch` (`branch_id`, `branch_name`, `branch_location`, `branch_contactno`) VALUES
(1, 'North Nazimabad Branch', 'North Nazimabad, Karachi', '021-7788990'),
(2, 'DHA Branch', 'DHA, Karachi', '021-6677881'),
(3, 'Model Town Branch', 'Model Town, Lahore', '042-5566778'),
(4, 'Gulberg Branch', 'Gulberg, Lahore', '042-8899001'),
(5, 'F-6 Branch', 'F-6, Islamabad', '051-2233445'),
(6, 'Clifton Branch', 'Clifton, Karachi', '021-3344556'),
(7, 'Blue Area Branch', 'Blue Area, Islamabad', '051-9988776');

-- --------------------------------------------------------

--
-- Table structure for table `fine`
--

CREATE TABLE `fine` (
  `fine_id` int(11) NOT NULL,
  `borrow_id` int(11) DEFAULT NULL,
  `amount` decimal(10,2) DEFAULT NULL,
  `paid_status` varchar(50) DEFAULT NULL,
  `date_issued` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `fine`
--

INSERT INTO `fine` (`fine_id`, `borrow_id`, `amount`, `paid_status`, `date_issued`) VALUES
(1, 1, 200.00, 'unpaid', '2024-02-20'),
(2, 2, 0.00, 'paid', '2024-02-17'),
(3, 3, 150.00, 'unpaid', '2024-02-25'),
(4, 4, 0.00, 'paid', '2024-02-21'),
(5, 5, 100.00, 'unpaid', '2024-03-01'),
(6, 6, 120.00, 'unpaid', '2024-03-02'),
(7, 7, 0.00, 'paid', '2024-02-28'),
(8, 8, 90.00, 'unpaid', '2024-03-03'),
(9, 9, 50.00, 'unpaid', '2024-03-04'),
(10, 10, 0.00, 'paid', '2024-03-05');

-- --------------------------------------------------------

--
-- Table structure for table `genre`
--

CREATE TABLE `genre` (
  `genre_id` int(11) NOT NULL,
  `genre_name` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `genre`
--

INSERT INTO `genre` (`genre_id`, `genre_name`) VALUES
(1, 'Fiction'),
(2, 'Fantasy'),
(3, 'Biography'),
(4, 'Science'),
(5, 'Philosophy'),
(6, 'History'),
(7, 'Mystery'),
(8, 'Horror'),
(9, 'Romance'),
(10, 'Self-Help');

-- --------------------------------------------------------

--
-- Table structure for table `member`
--

CREATE TABLE `member` (
  `member_id` int(11) NOT NULL,
  `member_name` varchar(50) DEFAULT NULL,
  `member_contactno` varchar(50) DEFAULT NULL,
  `member_joindate` date DEFAULT NULL,
  `membership_type_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `member`
--

INSERT INTO `member` (`member_id`, `member_name`, `member_contactno`, `member_joindate`, `membership_type_id`) VALUES
(1, 'Ahmed Raza', '0321-1112233', '2024-01-01', 1),
(2, 'Fatima Khan', '0332-2233445', '2024-01-03', 2),
(3, 'Hassan Ali', '0345-5566778', '2024-01-05', 3),
(4, 'Ayesha Noor', '0312-9988775', '2024-01-10', 1),
(5, 'Bilal Ahmed', '0309-6677889', '2024-01-12', 2),
(6, 'Zainab Tariq', '0331-4455667', '2024-01-15', 3),
(7, 'Usman Khalid', '0341-1122556', '2024-01-18', 1),
(8, 'Sana Qureshi', '0307-9988442', '2024-01-20', 4),
(9, 'Mubashir Iqbal', '0315-8899776', '2024-01-21', 2),
(10, 'Hiba Arshad', '0348-3322110', '2024-01-25', 1);

-- --------------------------------------------------------

--
-- Table structure for table `membership_type`
--

CREATE TABLE `membership_type` (
  `type_id` int(11) NOT NULL,
  `type_name` varchar(50) DEFAULT NULL,
  `borrow_limit` int(11) DEFAULT NULL,
  `duration_month` int(11) DEFAULT NULL,
  `fee` decimal(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `membership_type`
--

INSERT INTO `membership_type` (`type_id`, `type_name`, `borrow_limit`, `duration_month`, `fee`) VALUES
(1, 'Standard', 3, 12, 1200.00),
(2, 'Premium', 5, 12, 2500.00),
(3, 'Student', 2, 6, 600.00),
(4, 'Gold', 7, 12, 4000.00);

-- --------------------------------------------------------

--
-- Table structure for table `publisher`
--

CREATE TABLE `publisher` (
  `publisher_id` int(11) NOT NULL,
  `publisher_name` varchar(50) NOT NULL,
  `publisher_contactno` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `publisher`
--

INSERT INTO `publisher` (`publisher_id`, `publisher_name`, `publisher_contactno`) VALUES
(1, 'Penguin Books', '0301-1234567'),
(2, 'Oxford Press', '0302-9876543'),
(3, 'HarperCollins', '0303-8899776'),
(4, 'Bloomsbury', '0304-7654321'),
(5, 'Vintage Books', '0305-1122334'),
(6, 'Scholastic', '0306-4433221'),
(7, 'Routledge', '0307-5566778'),
(8, 'Simon & Schuster', '0308-6677885'),
(9, 'Random House', '0309-9988776'),
(10, 'Allen Lane', '0310-1239874');

-- --------------------------------------------------------

--
-- Table structure for table `staff`
--

CREATE TABLE `staff` (
  `staff_id` int(11) NOT NULL,
  `staff_branch_id` int(11) DEFAULT NULL,
  `staff_name` varchar(50) DEFAULT NULL,
  `staff_contactno` varchar(50) DEFAULT NULL,
  `staff_role` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `staff`
--

INSERT INTO `staff` (`staff_id`, `staff_branch_id`, `staff_name`, `staff_contactno`, `staff_role`) VALUES
(1, 1, 'Kamran Ali', '0321-4455667', 'Manager'),
(2, 1, 'Sarah Javed', '0333-1122334', 'Librarian'),
(3, 2, 'Hassan Rafi', '0345-7788112', 'Assistant'),
(4, 2, 'Amina Farooq', '0300-9988776', 'Clerk'),
(5, 3, 'Bilal Shah', '0312-6677889', 'Manager'),
(6, 3, 'Sana Iqbal', '0331-4455661', 'Librarian'),
(7, 4, 'Usman Tariq', '0345-2233445', 'Assistant'),
(8, 5, 'Hira Khan', '0307-5566778', 'Clerk'),
(9, 6, 'Naveed Akhtar', '0322-8899001', 'Manager'),
(10, 7, 'Fatima Riaz', '0333-6677882', 'Librarian');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `author`
--
ALTER TABLE `author`
  ADD PRIMARY KEY (`author_id`);

--
-- Indexes for table `book`
--
ALTER TABLE `book`
  ADD PRIMARY KEY (`book_id`);

--
-- Indexes for table `borrow_record`
--
ALTER TABLE `borrow_record`
  ADD PRIMARY KEY (`borrow_id`);

--
-- Indexes for table `branch`
--
ALTER TABLE `branch`
  ADD PRIMARY KEY (`branch_id`);

--
-- Indexes for table `fine`
--
ALTER TABLE `fine`
  ADD PRIMARY KEY (`fine_id`);

--
-- Indexes for table `genre`
--
ALTER TABLE `genre`
  ADD PRIMARY KEY (`genre_id`);

--
-- Indexes for table `member`
--
ALTER TABLE `member`
  ADD PRIMARY KEY (`member_id`);

--
-- Indexes for table `membership_type`
--
ALTER TABLE `membership_type`
  ADD PRIMARY KEY (`type_id`);

--
-- Indexes for table `publisher`
--
ALTER TABLE `publisher`
  ADD PRIMARY KEY (`publisher_id`);

--
-- Indexes for table `staff`
--
ALTER TABLE `staff`
  ADD PRIMARY KEY (`staff_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `author`
--
ALTER TABLE `author`
  MODIFY `author_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `book`
--
ALTER TABLE `book`
  MODIFY `book_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `borrow_record`
--
ALTER TABLE `borrow_record`
  MODIFY `borrow_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `branch`
--
ALTER TABLE `branch`
  MODIFY `branch_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `fine`
--
ALTER TABLE `fine`
  MODIFY `fine_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `genre`
--
ALTER TABLE `genre`
  MODIFY `genre_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `member`
--
ALTER TABLE `member`
  MODIFY `member_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `membership_type`
--
ALTER TABLE `membership_type`
  MODIFY `type_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `publisher`
--
ALTER TABLE `publisher`
  MODIFY `publisher_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `staff`
--
ALTER TABLE `staff`
  MODIFY `staff_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
