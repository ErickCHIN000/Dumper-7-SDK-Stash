#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x241 - 0x220)
// BlueprintGeneratedClass BP_GateOfMadness_EndingScenes.BP_GateOfMadness_EndingScenes_C
class ABP_GateOfMadness_EndingScenes_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UDialogueComponent*                    Dialogue;                                          // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWid_EndGameComposition_C*             Composition_Widget;                                // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoFade;                                            // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_GateOfMadness_EndingScenes_C* GetDefaultObj();

	void GoM_Ending();
	void CustomEvent_2();
	void CustomEvent();
	void CustomEvent_3();
	void CustomEvent_4();
	void CustomEvent_5();
	void CustomEvent_6();
	void CustomEvent_7();
	void CustomEvent_8();
	void StartGateOfMadnessEndingScenes(bool DoFade);
	void ExecuteUbergraph_BP_GateOfMadness_EndingScenes(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWid_MainMenu_Credits_C* CallFunc_Create_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostEvent_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostEvent_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable_2, int32 CallFunc_PostEvent_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_IsClosed_Variable_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UWid_EndGameComposition_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_6, bool Temp_bool_IsClosed_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACGMusicManager* CallFunc_GetMusicManager_ReturnValue, bool CallFunc_SetQuest_ReturnValue, bool K2Node_CustomEvent_DoFade, float CallFunc_SelectFloat_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue);
};

}


