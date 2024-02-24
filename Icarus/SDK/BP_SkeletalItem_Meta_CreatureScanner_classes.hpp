#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x5D9 - 0x5B0)
// BlueprintGeneratedClass BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C
class ABP_SkeletalItem_Meta_CreatureScanner_C : public ABP_SkeletalItem_Scanner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      ScreenWidget;                                      // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     AI;                                                // 0x5C0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Scanning;                                          // 0x5D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Meta_CreatureScanner_C* GetDefaultObj();

	void OnRep_Scanning(class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CreatureScanner_C* K2Node_DynamicCast_AsW_Creature_Scanner, bool K2Node_DynamicCast_bSuccess);
	void OnRep_AI(class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CreatureScanner_C* K2Node_DynamicCast_AsW_Creature_Scanner, bool K2Node_DynamicCast_bSuccess);
	void Play_Fish_Finder_Finish_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Play_Sonar_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class UWidgetComponent* GetScreenWidget();
	void GenericAction();
	void ReceiveBeginPlay();
	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner(int32 EntryPoint, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, const struct FAISetupRowHandle& Temp_struct_Variable, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CreatureScanner_C* K2Node_DynamicCast_AsW_Creature_Scanner, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* K2Node_Event_Character, TArray<class ABP_IcarusNPCGOAPCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess_1, const struct FAISetupRowHandle& CallFunc_GetAISetupRowHandle_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FBestiaryPointsRowHandle& CallFunc_MakeLiteralBestiaryPoints_ReturnValue);
};

}


