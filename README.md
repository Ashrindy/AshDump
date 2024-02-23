# `AshDump`
**_A dump of random tools, helpers, templates and other stuff that I made and use very often._**

## 📜 Description 📜
A dump of random stuff that I've either made or am working on, this will be the go-to for modders or anyone else interested in some cool tools, libraries and more.
</br>
</br>
**It still is a growing dump, I have some very WIP stuff that is still not here.**

# 🗂️ Contents 🗂️

## 010 Editor Templates
I use 010 editor quite often when discovering and cracking file formats, meaning I have some templates on my hand.
### Sonic Series
|  | **Sonic Frontiers** |  |
| :------:| :------:| :------:|
| **Template Name** | **Info** | **Credits** |
| ResParticleLocation | For easy reading of the .effdb files that contain effect names based on the animation | Used ik-01's ResBinaryFile.h |
| ResAIStateMachine | For easy reading of the .aism files | Used ik-01's ResBinaryFile.h |
| ResPhysicsSkeleton | For easy reading of the .pba files, not much is currently known | Used ik-01's ResBinaryFile.h |

## Libraries
Most of the libraries are in C# but sometimes it is in another language, these will eventually be used to make a proper tool to make a good use of said libraries.
### Sonic Series
|                      Game/Project                       |   Library Name   | Use | Language |
| :---------------------------------------------: | :------:| :------:| :------:|
|     **Sonic Frontiers**     | DiEventLib | Used for easy reading and writing for the cutscene (.dvscene) files | C# |

## Tools
Like said above, these tools utilize the knowledge and code from the libraries.
### Sonic Series
|                      Game/Project                       |   Tool Name   | Use | Language |
| :---------------------------------------------: | :------:| :------:| :------:|
|     **Sonic Frontiers**     | DvScene PreRendered to Realtime | Used for easy converting from prerendered cutscenes to realtime, by moving the subtitles, letterbox and more. | C# |
