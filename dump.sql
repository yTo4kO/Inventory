-- phpMyAdmin SQL Dump
-- version 2.11.8.1deb4
-- http://www.phpmyadmin.net
--
-- Хост: localhost
-- Время создания: Май 21 2009 г., 20:13
-- Версия сервера: 5.0.77
-- Версия PHP: 5.2.6-5

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";

--
-- База данных: `inventory`
--

-- --------------------------------------------------------

--
-- Структура таблицы `def_blist`
--

DROP TABLE IF EXISTS `def_blist`;
CREATE TABLE IF NOT EXISTS `def_blist` (
  `id` int(11) NOT NULL auto_increment,
  `cgid` int(11) NOT NULL,
  `pid` int(11) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=120 ;

-- --------------------------------------------------------

--
-- Структура таблицы `def_comps`
--

DROP TABLE IF EXISTS `def_comps`;
CREATE TABLE IF NOT EXISTS `def_comps` (
  `id` int(11) NOT NULL auto_increment,
  `gid` int(11) NOT NULL,
  `name` varchar(100) NOT NULL,
  `os` varchar(25) NOT NULL,
  `sp` varchar(20) NOT NULL,
  `version` varchar(10) NOT NULL,
  `user` varchar(60) NOT NULL,
  `organization` varchar(60) NOT NULL,
  `path` varchar(20) NOT NULL,
  `lastupdate` int(11) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=4 ;

-- --------------------------------------------------------

--
-- Структура таблицы `def_comp_prog`
--

DROP TABLE IF EXISTS `def_comp_prog`;
CREATE TABLE IF NOT EXISTS `def_comp_prog` (
  `id` int(11) NOT NULL auto_increment,
  `cid` int(11) NOT NULL,
  `pid` int(11) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=121 ;

-- --------------------------------------------------------

--
-- Структура таблицы `def_comp_update`
--

DROP TABLE IF EXISTS `def_comp_update`;
CREATE TABLE IF NOT EXISTS `def_comp_update` (
  `id` int(11) NOT NULL auto_increment,
  `cid` int(11) NOT NULL,
  `uid` int(11) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

-- --------------------------------------------------------

--
-- Структура таблицы `def_gcomps`
--

DROP TABLE IF EXISTS `def_gcomps`;
CREATE TABLE IF NOT EXISTS `def_gcomps` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(50) NOT NULL,
  `icon` varchar(30) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=11 ;

--
-- Дамп данных таблицы `def_gcomps`
--

INSERT INTO `def_gcomps` (`id`, `name`, `icon`) VALUES
(1, 'Основная группа', '');

-- --------------------------------------------------------


--
-- Структура таблицы `def_gprogs`
--

DROP TABLE IF EXISTS `def_gprogs`;
CREATE TABLE IF NOT EXISTS `def_gprogs` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(50) NOT NULL,
  `icon` varchar(30) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=7 ;

--
-- Дамп данных таблицы `def_gprogs`
--

INSERT INTO `def_gprogs` (`id`, `name`, `icon`) VALUES
(1, 'Основная группа', '');

-- --------------------------------------------------------

--
-- Структура таблицы `def_progs`
--

DROP TABLE IF EXISTS `def_progs`;
CREATE TABLE IF NOT EXISTS `def_progs` (
  `id` int(11) NOT NULL auto_increment,
  `gid` int(11) NOT NULL,
  `name` varchar(80) NOT NULL,
  `publisher` varchar(50) NOT NULL,
  `version` varchar(25) NOT NULL,
  `hide` tinyint(1) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=117 ;

-- --------------------------------------------------------

--
-- Структура таблицы `def_updates`
--

DROP TABLE IF EXISTS `def_updates`;
CREATE TABLE IF NOT EXISTS `def_updates` (
  `id` int(11) NOT NULL auto_increment,
  `name` varchar(20) NOT NULL,
  `dispname` varchar(75) NOT NULL,
  `sp` smallint(6) NOT NULL,
  `version` varchar(16) NOT NULL,
  `help` varchar(75) NOT NULL,
  `publisher` varchar(25) NOT NULL,
  `releasetype` smallint(6) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

-- --------------------------------------------------------

--
-- Структура таблицы `def_users`
--

DROP TABLE IF EXISTS `def_users`;
CREATE TABLE IF NOT EXISTS `def_users` (
  `id` tinyint(4) NOT NULL auto_increment,
  `user` varchar(15) NOT NULL,
  `password` varchar(32) NOT NULL,
  `admin` tinyint(1) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Дамп данных таблицы `def_users`
--

INSERT INTO `def_users` (`id`, `user`, `password`, `admin`) VALUES
(1, 'Администратор', '21232f297a57a5a743894a0e4a801fc3', 1),
(2, 'Пользователь', 'ee11cbb19052e40b07aac0ca060c23ee', 0);

-- --------------------------------------------------------

--
-- Структура таблицы `def_wlist`
--

DROP TABLE IF EXISTS `def_wlist`;
CREATE TABLE IF NOT EXISTS `def_wlist` (
  `id` int(11) NOT NULL auto_increment,
  `cgid` int(11) NOT NULL,
  `pid` int(11) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=103 ;
