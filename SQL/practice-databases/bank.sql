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
-- Database: `bank`
--

-- --------------------------------------------------------

--
-- Table structure for table `account`
--

CREATE TABLE `account` (
  `accountid` int(11) NOT NULL,
  `customerid` int(11) DEFAULT NULL,
  `type` varchar(30) DEFAULT NULL,
  `balance` decimal(15,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `account`
--

INSERT INTO `account` (`accountid`, `customerid`, `type`, `balance`) VALUES
(1, 1, 'Savings', 150000.00),
(2, 2, 'Current', 98000.50),
(3, 3, 'Savings', 200000.00),
(4, 4, 'Fixed Deposit', 500000.00),
(5, 5, 'Savings', 120000.75),
(6, 6, 'Current', 70000.25),
(7, 7, 'Savings', 95000.00);

-- --------------------------------------------------------

--
-- Table structure for table `branches`
--

CREATE TABLE `branches` (
  `BranchID` int(11) NOT NULL,
  `BranchName` varchar(30) DEFAULT NULL,
  `city` varchar(30) DEFAULT NULL,
  `contactno` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `branches`
--

INSERT INTO `branches` (`BranchID`, `BranchName`, `city`, `contactno`) VALUES
(1, 'UBL Main Karachi', 'Karachi', '021-34567890'),
(2, 'UBL Lahore Cantt', 'Lahore', '042-33445566'),
(3, 'UBL Blue Area', 'Islamabad', '051-22334455'),
(4, 'UBL Clock Tower', 'Faisalabad', '041-55667788'),
(5, 'UBL Gulgasht', 'Multan', '061-44556677'),
(6, 'UBL Saddar', 'Peshawar', '091-22334455'),
(7, 'UBL Clifton', 'Karachi', '021-33445577');

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `CustomerID` int(11) NOT NULL,
  `name` varchar(30) DEFAULT NULL,
  `city` varchar(30) DEFAULT NULL,
  `contactno` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`CustomerID`, `name`, `city`, `contactno`) VALUES
(1, 'Hamza kakar', 'Karachi', '03001234567'),
(2, 'Sara Ahmed', 'Lahore', '03111223344'),
(3, 'jawad hussainf', 'Islamabad', '03219876543'),
(4, 'Ayesha Malik', 'Faisalabad', '03334445566'),
(5, 'Omar akmal', 'Multan', '03445556677'),
(6, 'tahir hussain', 'Karachi', '03556677889'),
(7, 'Usman Tariq', 'Peshawar', '03667788990');

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `empid` int(11) NOT NULL,
  `empname` varchar(30) DEFAULT NULL,
  `position` varchar(30) DEFAULT NULL,
  `managerid` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`empid`, `empname`, `position`, `managerid`) VALUES
(1, 'Imran Qureshi', 'Branch Manager', NULL),
(2, 'Zainab Ali', 'Operations Manager', NULL),
(3, 'Ahmed Raza', 'Cashier', 1),
(4, 'Nida Hassan', 'Customer Service Officer', 2),
(5, 'Tariq Mehmood', 'Account Officer', 1),
(6, 'Hira Iqbal', 'Loan Officer', 2),
(7, 'Farhan Aziz', 'IT Support', 1);

-- --------------------------------------------------------

--
-- Table structure for table `transactions`
--

CREATE TABLE `transactions` (
  `transactionID` int(11) NOT NULL,
  `accountid` int(11) DEFAULT NULL,
  `transactionDate` datetime DEFAULT current_timestamp(),
  `Type` varchar(30) DEFAULT NULL,
  `amount` decimal(15,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `transactions`
--

INSERT INTO `transactions` (`transactionID`, `accountid`, `transactionDate`, `Type`, `amount`) VALUES
(1, 1, '2024-10-01 10:00:00', 'Deposit', 10000.00),
(2, 1, '2024-10-03 09:00:00', 'Withdrawal', 5000.00),
(3, 2, '2024-10-02 11:00:00', 'Deposit', 20000.00),
(4, 3, '2024-10-04 15:30:00', 'Deposit', 5000.00),
(5, 4, '2024-10-05 12:00:00', 'Withdrawal', 10000.00),
(6, 5, '2024-10-06 14:00:00', 'Deposit', 15000.00),
(7, 6, '2024-10-07 16:00:00', 'Withdrawal', 3000.00);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `account`
--
ALTER TABLE `account`
  ADD PRIMARY KEY (`accountid`),
  ADD KEY `customerid` (`customerid`);

--
-- Indexes for table `branches`
--
ALTER TABLE `branches`
  ADD PRIMARY KEY (`BranchID`);

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`CustomerID`);

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`empid`),
  ADD KEY `managerid` (`managerid`);

--
-- Indexes for table `transactions`
--
ALTER TABLE `transactions`
  ADD PRIMARY KEY (`transactionID`),
  ADD KEY `accountid` (`accountid`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `account`
--
ALTER TABLE `account`
  MODIFY `accountid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `branches`
--
ALTER TABLE `branches`
  MODIFY `BranchID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `customer`
--
ALTER TABLE `customer`
  MODIFY `CustomerID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `employee`
--
ALTER TABLE `employee`
  MODIFY `empid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `transactions`
--
ALTER TABLE `transactions`
  MODIFY `transactionID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `account`
--
ALTER TABLE `account`
  ADD CONSTRAINT `account_ibfk_1` FOREIGN KEY (`customerid`) REFERENCES `customer` (`CustomerID`);

--
-- Constraints for table `employee`
--
ALTER TABLE `employee`
  ADD CONSTRAINT `employee_ibfk_1` FOREIGN KEY (`managerid`) REFERENCES `employee` (`empid`);

--
-- Constraints for table `transactions`
--
ALTER TABLE `transactions`
  ADD CONSTRAINT `transactions_ibfk_1` FOREIGN KEY (`accountid`) REFERENCES `account` (`accountid`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
