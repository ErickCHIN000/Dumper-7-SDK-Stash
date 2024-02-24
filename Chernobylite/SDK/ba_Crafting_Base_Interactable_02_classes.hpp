#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x418 - 0x348)
// BlueprintGeneratedClass ba_Crafting_Base_Interactable_02.ba_Crafting_Base_Interactable_02_C
class Aba_Crafting_Base_Interactable_02_C : public Aba_InteractableCustom_01_NoSave_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                         Box;                                               // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Flipped;                                           // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  CraftingBase_childActor;                           // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowFlipping;                                     // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EEA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           CustomRecipes;                                     // 0x370(0x10)(Edit, BlueprintVisible)
	TMap<class FName, int32>                     RememberedRecipes;                                 // 0x380(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnCraftingEnd;                                     // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Is_Power_Needed;                                   // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InterpolationPending;                              // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPowerNeededOutsideOfMainBase;                    // 0x3E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_EF6[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCraftingEndDelayed;                              // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowCraftingTutorial;                              // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F02[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomNameOnField;                                 // 0x400(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class Aba_Crafting_Base_Interactable_02_C* GetDefaultObj();

	void UnlockJournalRecipes(const TArray<class FName>& RecipeNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSavedNameArray& K2Node_MakeStruct_SavedNameArray, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class AActor* CallFunc_GetParentActor_ReturnValue, class ABaseBuildSystemEntity* K2Node_DynamicCast_AsBase_Build_System_Entity, bool K2Node_DynamicCast_bSuccess, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class FName CallFunc_GetBuildID_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RestoreOriginallyKnownRecipes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_ForgetRecipe_OutSomethingDeleted, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Map_Length_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void AssignCustomRecipes(TArray<struct FDataTableRowHandle>& TargetArray, const TArray<class FName>& AssignedRecipes, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Less_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_ForgetRecipe_OutSomethingDeleted, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance);
	void ReceiveBeginPlay();
	void InteractionOut();
	void RestoreInteraction();
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void PassedEndDelayed();
	void SetupCustomName();
	void ExecuteUbergraph_ba_Crafting_Base_Interactable_02(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class Aba_Crafting_Base_02_C* K2Node_DynamicCast_AsBa_Crafting_Base_02, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOverlappingComponent_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FTransform& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_ForgetRecipe_OutSomethingDeleted, TArray<class ARadarAfterImage*>& CallFunc_GetAllActorsOfClass_OutActors, class ARadarAfterImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class Aba_Crafting_Base_02_C* K2Node_DynamicCast_AsBa_Crafting_Base_02_1, bool K2Node_DynamicCast_bSuccess_2, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_BuildSystemGetIsPowerSufficient_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class FText CallFunc_MakeLiteralText_ReturnValue, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_NotEqual_TextText_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue_1, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
	void OnCraftingEndDelayed__DelegateSignature();
	void OnCraftingEnd__DelegateSignature();
};

}


