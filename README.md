# `AshDump`

[![release](https://img.shields.io/github/v/release/Ashrindy/AshDump?color=red)](https://github.com/Ashrindy/AshDump/releases/latest)
[![downloads](https://img.shields.io/github/downloads/Ashrindy/AshDump/total?color=green)](#)

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

|                        |                                                         **Sonic Frontiers**                                                          |                                                     |
| :--------------------: | :----------------------------------------------------------------------------------------------------------------------------------: | :-------------------------------------------------: |
|   **Template Name**    |                                                               **Info**                                                               |                     **Credits**                     |
|   ResAIStateMachine    |                                                 For easy reading of the .aism files                                                  |            Used ik-01's ResBinaryFile.h             |
|    ResAnimationPxd     |                                                For easy reading of the .anm.pxd files                                                |            Used ik-01's ResBinaryFile.h             |
| ResAnimCameraContainer |                                               For easy reading of the .cam-anim files                                                |         Used Kwas's research on .cam-anim's         |
|     ResAnimTexPat      |                             For easy reading of the .pt-anim files, though there are two unknown values                              |      Used ik-01's research on ResAnimMaterial       |
|     ResAnimTexSrt      |                                                For easy reading of the .uv-anim files                                                |         Used Kwas's research on .uv-anim's          |
|       ResAnimVis       |                                               For easy reading of the .vis-anim files                                                |      Used ik-01's research on ResAnimMaterial       |
|     ResBulletMesh      |                                                For easy reading of the .btmesh files                                                 | Used ik-01's ResBinaryFile.h and KnuxLib's research |
|  ResDensityPointCloud  |                        For easy reading of the .densitypointcloud files, though there's a few unknown values                         | Used ik-01's ResBinaryFile.h and KnuxLib's research |
|   ResDensitySetting    |                         For easy reading of the .densitysetting files, though there's alot of unknown values                         |            Used ik-01's ResBinaryFile.h             |
|     ResMasterLevel     |                                                For easy reading of the .mlevel files                                                 | Used ik-01's ResBinaryFile.h and KnuxLib's research |
|      ResMaterial       |                                               For easy reading of the .material files                                                |               Used HedgeLib# research               |
|        ResModel        |                         For easy reading of the .model files, it's not finished because it was made for fun                          |               Used HedgeLib# research               |
|    ResNavMeshConfig    |                                                  For easy reading of the .nmc files                                                  |                                                     |
|     ResNavMeshTile     |                              For easy reading of the .nmt files, only a bit of data has been documented                              |                                                     |
|  ResParticleLocation   |                        For easy reading of the .effdb files that contain effect names based on the animation                         |            Used ik-01's ResBinaryFile.h             |
|   ResPhysicsSkeleton   |                                   For easy reading of the .pba files, not much is currently known                                    |            Used ik-01's ResBinaryFile.h             |
|     ResPointcloud      |                                       For easy reading of the .pcmodel, .pccol and .pcrt files                                       | Used ik-01's ResBinaryFile.h and KnuxLib's research |
|        ResProbe        |                                                 For easy reading of the .probe files                                                 |            Used ik-01's ResBinaryFile.h             |
|     ResShaderList      | For easy reading of the .shader-list files, not much is currently known, it's still a bit buggy. Being used for research on shaders. |            Used ik-01's ResBinaryFile.h             |
|     ResSkeletonPxd     |                                                For easy reading of the .skl.pxd files                                                |            Used ik-01's ResBinaryFile.h             |
|   ResTerrainMaterial   |                                           For easy reading of the .terrain-material files                                            |            Used ik-01's ResBinaryFile.h             |

## Libraries

Most of the libraries are in C# but sometimes it is in another language, these will eventually be used to make a proper tool to make a good use of said libraries.

### Sonic Series

|                  |                         **Sonic Frontiers**                         |              |
| :--------------: | :-----------------------------------------------------------------: | :----------: |
| **Library Name** |                               **Use**                               | **Language** |
|    DiEventLib    | Used for easy reading and writing for the cutscene (.dvscene) files |      C#      |

## Tools

Like said above, these tools utilize the knowledge and code from the libraries.

### Sonic Series

|                                 |                                                            **Sonic Frontiers**                                                             |              |
| :-----------------------------: | :----------------------------------------------------------------------------------------------------------------------------------------: | :----------: |
|          **Tool Name**          |                                                                  **Info**                                                                  | **Language** |
|       DvScene Asm Creator       |                           Used for easier character adding to .dvscenes as each one requires their own .asm file                           |     C++      |
| DvScene Element Frame Offseter  |                           Used for simple offseting Frame Start and End for every element located in a cutscene                            |      C#      |
| DvScene PreRendered to Realtime |               Used for easy converting from prerendered cutscenes to realtime, by moving the subtitles, letterbox and more.                |      C#      |
|        DvScene Mute BGM         |                                     Used for muting BGM in cutscenes, seems to only work with bosses.                                      |      C#      |
|        HeightField Tool         | Used for easy converting the .heightfield format to a generic image file and vice-versa, it still isn't perfect as the terrain gets blocky |      C#      |
|            Vis Tool             |                             Used for easy editing of the .vis-anim format, converts it to .json and vice-versa                             |      C#      |
