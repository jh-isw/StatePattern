/*
 * MusicPlayer.h
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#ifndef MUSICPLAYER_H_
#define MUSICPLAYER_H_

#include <string>

class MusicPlayerState;

class MusicPlayer {
public:
	enum State
	{
		ST_STOPPED,
		ST_PLAYING,
		ST_PAUSED
	};

	MusicPlayer();
	virtual ~MusicPlayer();

	void Play();
	void Pause();
	void Stop();

	void SetState(State state);
	std::string GetState();

private:
	MusicPlayerState * m_pState;
};

#endif /* MUSICPLAYER_H_ */
