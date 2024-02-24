#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAE (0x3C0 - 0x312)
// BlueprintGeneratedClass Cathedral_Door_Final_Lever.Cathedral_Door_Final_Lever_C
class ACathedral_Door_Final_Lever_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2A35[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Pillar2;                                           // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene2;                                            // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Pillar1;                                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene1;                                            // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Pillar3;                                           // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Button;                                            // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fire_eyes2;                                        // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fire_eyes1;                                        // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fire_eyes;                                         // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Time_0317410C4CAD0B252FF9A3B035C41714;  // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_0317410C4CAD0B252FF9A3B035C41714; // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACathedral_Door_C*                     Door;                                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACathedral_Door_OneOfThree_Lever_C*> Levers;                                            // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<bool>                                 LeversEnabled;                                     // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        LeversEnabledCount;                                // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               Pillars;                                           // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACathedral_Door_Final_Lever_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_OnActorUsed_Success);
	void UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateLeverActivations();
	void PressedButton();
	void PlayPillarOpening(class USceneComponent* Pillar);
	void ExecuteUbergraph_Cathedral_Door_Final_Lever(int32 EntryPoint, bool CallFunc_IsMyNameInChangedSet_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, class ACathedral_Door_OneOfThree_Lever_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsActorNameInChangedSet_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, class USceneComponent* CallFunc_GetChildComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class USceneComponent* CallFunc_GetChildComponent_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsMyNameInChangedSet_ReturnValue_1, class ACathedral_Step_Button_C* K2Node_DynamicCast_AsCathedral_Step_Button, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_OnActorUsed_Success, class USceneComponent* K2Node_CustomEvent_Pillar, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


