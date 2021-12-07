-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Dec 07, 2021 at 09:18 PM
-- Server version: 10.4.20-MariaDB
-- PHP Version: 8.0.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `Bois`
--

-- --------------------------------------------------------

--
-- Table structure for table `Bois`
--

CREATE TABLE `Bois` (
  `id` int(11) NOT NULL,
  `bois` varchar(255) NOT NULL,
  `typeBois` varchar(255) NOT NULL,
  `origine` varchar(255) NOT NULL,
  `tempsSechage` int(11) NOT NULL,
  `tempMin` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `Bois`
--

INSERT INTO `Bois` (`id`, `bois`, `typeBois`, `origine`, `tempsSechage`, `tempMin`) VALUES
(1, 'érable', 'dur', 'US', 20, 25),
(2, 'boulot', 'flexible', 'CA', 18, 20),
(3, 'chêne', 'dur', 'FR', 20, 23);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `Bois`
--
ALTER TABLE `Bois`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `Bois`
--
ALTER TABLE `Bois`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
