#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Music.BPFL_Music_C
class UBPFL_Music_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Music_C* GetDefaultObj();

	void Get_BPMusic_Manager(class UObject* __WorldContext, class UBP_Music_Manager_C** MusicManager, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager, class UBP_Music_Manager_C* K2Node_DynamicCast_AsBP_Music_Manager, bool K2Node_DynamicCast_bSuccess);
	void BP_Music_Manager_Revoke_State(class UAkStateValue* Music_State, class UObject* __WorldContext, class UBP_Music_Manager_C* CallFunc_Get_BPMusic_Manager_MusicManager, bool CallFunc_IsValid_ReturnValue);
	void BP_Music_Manager_Set_State(class UAkStateValue* Music_State, enum class EMusicPriority Priority, class UObject* __WorldContext, class UGlobalMusicManager* Global_Music_Manager, class UBP_Music_Manager_C* BPMusicManager, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UBP_Music_Manager_C* CallFunc_Get_BPMusic_Manager_MusicManager, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_TrySetMusicState_ReturnValue);
	void Get_Music_Manager(class UObject* __WorldContext, class UMusicManager** MusicManager, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMusicManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


