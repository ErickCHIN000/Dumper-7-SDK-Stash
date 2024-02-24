#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x530 - 0x528)
// BlueprintGeneratedClass BP_Mus_MenuMusic.BP_Mus_MenuMusic_C
class ABP_Mus_MenuMusic_C : public ABP_ReplicatingMusicProvider_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x528(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Mus_MenuMusic_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Mus_MenuMusic(int32 EntryPoint, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
};

}


