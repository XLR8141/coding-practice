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
-- Database: `company`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `id` int(11) NOT NULL,
  `name` varchar(123) DEFAULT NULL,
  `designation` varchar(50) DEFAULT NULL,
  `salary` decimal(10,2) DEFAULT NULL,
  `join_date` date DEFAULT NULL,
  `email` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`id`, `name`, `designation`, `salary`, `join_date`, `email`) VALUES
(0, NULL, NULL, NULL, NULL, NULL),
(5, 'Kashif Hussuain', 'Shami road', 30000.00, '2025-02-21', 'Kashif@gmail.com'),
(12, 'Mohsin Jamal', 'Iqbal colony', 47000.00, '2022-12-02', 'Mohsin@gmail.com'),
(21, 'Asim Azhar', '24 chungi', 24000.00, '2025-03-23', 'Asim@gmail.com'),
(22, 'Parweena Shahnawaz', 'dhok hasu', 50000.00, '2015-12-01', 'parweena@gmail.com'),
(23, 'Zainul abidin', 'qyum stadium', 12000.00, '2020-06-02', 'zain@gmail.com'),
(24, 'Ahmed Nazir', 'Hashtnagri', 12300000.00, '2022-08-27', 'Ahmed@gmail.com'),
(54, 'Ahmed Ali', 'railway station', 25000.00, '2018-10-23', 'Ahmed@gmail.com'),
(65, 'Obaid Qayum', 'movli ameers shah', 60000.00, '2002-04-22', 'Obaid@gmail.com');

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `id` int(11) NOT NULL,
  `name` varchar(30) NOT NULL,
  `age` int(11) DEFAULT NULL CHECK (`age` >= 18),
  `department` varchar(30) DEFAULT NULL,
  `enrollment_year` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`id`, `name`, `age`, `department`, `enrollment_year`) VALUES
(1, 'Shah nawaz', NULL, 'Data Science', '2025-05-01'),
(2, 'Mehwis Hayat', NULL, 'Computer Science', '2022-06-19'),
(3, 'Hamad Shah', NULL, 'Data Science', '0000-00-00'),
(4, 'Kashif Hussain', NULL, 'Data Science', '2002-03-15'),
(5, 'parween kakar', NULL, 'Computer Science', '2021-02-19'),
(6, 'bakhtyar shah', NULL, 'Medical Science', '2022-01-14'),
(7, 'zohaib kamar', NULL, 'Data Science', '2025-08-17'),
(8, 'abdul wali', NULL, 'Data Science', '2020-02-19'),
(9, 'sohail malik', NULL, 'BBA', '2019-06-14'),
(10, 'Ahmed Najeeb', NULL, 'BBA', '2015-10-12');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
