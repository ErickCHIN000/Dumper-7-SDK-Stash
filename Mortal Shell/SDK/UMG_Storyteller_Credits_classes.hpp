#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x280 - 0x230)
// WidgetBlueprintGeneratedClass UMG_Storyteller_Credits.UMG_Storyteller_Credits_C
class UUMG_Storyteller_Credits_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               FinishNowButton;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               StorytellerTestButton;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Storyteller_C*                     StorytellerObject;                                 // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDialogTrees>                  DialogArray;                                       // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        TestIterator;                                      // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Storyteller_Credits_C*             StoryTellerCreditsRef;                             // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CreditsDone;                                       // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_Storyteller_Credits_C* GetDefaultObj();

	void BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void GiveControlToPlayer();
	void BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void StartStory();
	void CreditsCompleted();
	void ExecuteUbergraph_UMG_Storyteller_Credits(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FDialogTrees& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Storyteller_Credits_C* CallFunc_FinishSpawningActor_ReturnValue);
	void CreditsDone__DelegateSignature();
};

}


