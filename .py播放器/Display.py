class video(object):
     def __init__(self,path):
        self.path = path
       
     def play(self):
        from os import startfile
        startfile(self.path)  

class Movie_mp4(video):
    type='MP4'

class say_hello:
     def __init__(self):
            print("You were fooled!") 

trick=say_hello()
movie = Movie_mp4(r'')
movie.play()
#A funny trick, isn’t it? 😀
