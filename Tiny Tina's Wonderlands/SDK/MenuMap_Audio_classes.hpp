#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4A0 - 0x488)
// BlueprintGeneratedClass MenuMap_Audio.MenuMap_Audio_C
class AMenuMap_Audio_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           MuteWorldAudio;                                    // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           UnmuteWorldAudio;                                  // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMenuMap_Audio_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Audio_UnmuteWorld();
	void Audio_MuteWorld();
	void ExecuteUbergraph_MenuMap_Audio(int32 EntryPoint, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1);
};

}


