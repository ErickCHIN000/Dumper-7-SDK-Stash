#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ScreenFrameInterface.ScreenFrameInterface_C
class IScreenFrameInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IScreenFrameInterface_C* GetDefaultObj();

	void GetSoundToPlay(class UAkAudioEvent** Event);
};

}


