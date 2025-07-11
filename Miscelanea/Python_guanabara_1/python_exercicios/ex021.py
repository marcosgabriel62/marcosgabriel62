from audioplayer import AudioPlayer

audio_player = AudioPlayer("C:/Users/Marcos/OneDrive/Área de Trabalho/paradigmas/sound1.mp3")
audio_player.play(loop=False, block=True)
audio_player.volume(100)