/***************************************************************************
 *   Copyright (C) 2008-2009 by Andrzej Rybczak                            *
 *   electricityispower@gmail.com                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.              *
 ***************************************************************************/

#ifndef _SETTINGS_H
#define _SETTINGS_H

#include <limits>

#include "home.h"
#include "libmpdclient.h"
#include "ncmpcpp.h"

#ifdef WIN32
# define HOME_FOLDER "\\ncmpcpp\\"
#else
# define HOME_FOLDER "/.ncmpcpp/"
#endif // WIN32

const std::string config_dir = home_path + HOME_FOLDER;
const int null_key = std::numeric_limits<int>::max();

struct ncmpcpp_keys
{
	int Up[2];
	int Down[2];
	int PageUp[2];
	int PageDown[2];
	int Home[2];
	int End[2];
	int Space[2];
	int Enter[2];
	int Delete[2];
	int VolumeUp[2];
	int VolumeDown[2];
	int ScreenSwitcher[2];
	int Help[2];
	int Playlist[2];
	int Browser[2];
	int SearchEngine[2];
	int MediaLibrary[2];
	int PlaylistEditor[2];
	int TagEditor[2];
	int Outputs[2];
	int Clock[2];
	int Stop[2];
	int Pause[2];
	int Next[2];
	int Prev[2];
	int SeekForward[2];
	int SeekBackward[2];
	int ToggleRepeat[2];
	int ToggleRandom[2];
	int ToggleSingle[2];
	int ToggleConsume[2];
	int ToggleSpaceMode[2];
	int ToggleAddMode[2];
	int Shuffle[2];
	int ToggleCrossfade[2];
	int SetCrossfade[2];
	int UpdateDB[2];
	int SortPlaylist[2];
	int ApplyFilter[2];
	int FindForward[2];
	int FindBackward[2];
	int NextFoundPosition[2];
	int PrevFoundPosition[2];
	int ToggleFindMode[2];
	int EditTags[2];
	int SongInfo[2];
	int ArtistInfo[2];
	int GoToPosition[2];
	int Lyrics[2];
	int ReverseSelection[2];
	int DeselectAll[2];
	int AddSelected[2];
	int Clear[2];
	int Crop[2];
	int MvSongUp[2];
	int MvSongDown[2];
	int MoveTo[2];
	int Add[2];
	int SavePlaylist[2];
	int GoToNowPlaying[2];
	int GoToContainingDir[2];
	int ToggleAutoCenter[2];
	int ToggleDisplayMode[2];
	int ToggleLyricsDB[2];
	int GoToParentDir[2];
	int SwitchTagTypeList[2];
	int Quit[2];
};

struct ncmpcpp_config
{
	std::string mpd_host;
	std::string mpd_music_dir;
	std::string empty_tag;
	std::string song_list_format;
	std::string song_columns_list_format;
	std::string song_status_format;
	std::string song_window_title_format;
	std::string song_library_format;
	std::string tag_editor_album_format;
	std::string external_editor;
	std::string system_encoding;
	std::string execute_on_song_change;
	
	std::string pattern;
	
	Buffer browser_playlist_prefix;
	Buffer selected_item_prefix;
	Buffer selected_item_suffix;
	
	Color color1;
	Color color2;
	Color empty_tags_color;
	Color header_color;
	Color volume_color;
	Color state_line_color;
	Color state_flags_color;
	Color main_color;
	Color main_highlight_color;
	Color progressbar_color;
	Color statusbar_color;
	Color active_column_color;
	
	Border window_border;
	Border active_window_border;
	
	mpd_TagItems media_lib_primary_tag;
	
	bool colors_enabled;
	bool fancy_scrolling;
	bool playlist_show_remaining_time;
	bool columns_in_playlist;
	bool columns_in_browser;
	bool columns_in_search_engine;
	bool set_window_title;
	bool header_visibility;
	bool statusbar_visibility;
	bool autocenter_mode;
	bool wrapped_search;
	bool space_selects;
	bool ncmpc_like_songs_adding;
	bool albums_in_tag_editor;
	bool incremental_seeking;
	bool now_playing_lyrics;
	bool local_browser;
	bool local_browser_show_hidden_files;
	bool search_in_db;
	bool display_screens_numbers_on_start;
	bool clock_display_seconds;
	bool ignore_leading_the;
	bool block_search_constraints_change;
	bool use_console_editor;
	bool use_cyclic_scrolling;
	bool allow_physical_files_deletion;
	bool allow_physical_directories_deletion;
	bool mouse_support;
	
	int mpd_port;
	int mpd_connection_timeout;
	int crossfade_time;
	int seek_time;
	int playlist_disable_highlight_delay;
	int message_delay_time;
	int lyrics_db;
	int regex_type;
};

extern ncmpcpp_config Config;
extern ncmpcpp_keys Key;

void CreateConfigDir();
void DefaultKeys(ncmpcpp_keys &);
void DefaultConfiguration(ncmpcpp_config &);
void ReadKeys(ncmpcpp_keys &);
void ReadConfiguration(ncmpcpp_config &);

#endif

