#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C
// (None)

class UClass* UBP_ActionableBehaviour_Building_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Building_C");

	return Clss;
}


// BP_ActionableBehaviour_Building_C BP_ActionableBehaviour_Building.Default__BP_ActionableBehaviour_Building_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Building_C* UBP_ActionableBehaviour_Building_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Building_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Building_C*>(UBP_ActionableBehaviour_Building_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.GetContextMenuItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FContextMenuItemData>MenuItems                                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               RestrictVariations                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LockVariations                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FContextMenuItemData>ContextMenuItems                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSessionFlagsRowHandle      CallFunc_MakeLiteralSessionFlags_ReturnValue                     (NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasSessionFlag_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSessionFlagsRowHandle      CallFunc_MakeLiteralSessionFlags_ReturnValue_1                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSessionFlag_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildableData              CallFunc_GetBuildableData_BuildableData                          (None)
// enum class EDataValid              CallFunc_GetBuildableData_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildingVariation          CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildingPiece              CallFunc_GetBuildingPiecesStruct_BuildingPieces                  (None)
// enum class EValid                  CallFunc_GetBuildingPiecesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCraftingRequirements_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Get_Icon_or_Missing_Output                              (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildingLookup             CallFunc_GetBuildingLookupStruct_BuildingLookup                  (None)
// enum class EValid                  CallFunc_GetBuildingLookupStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData                            (ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Building_C::GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems, bool RestrictVariations, bool LockVariations, const TArray<struct FContextMenuItemData>& ContextMenuItems, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FSessionFlagsRowHandle& CallFunc_MakeLiteralSessionFlags_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasSessionFlag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSessionFlagsRowHandle& CallFunc_MakeLiteralSessionFlags_ReturnValue_1, bool CallFunc_HasSessionFlag_ReturnValue_1, bool K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess_1, const struct FBuildableData& CallFunc_GetBuildableData_BuildableData, enum class EDataValid CallFunc_GetBuildableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FBuildingVariation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FBuildingPiece& CallFunc_GetBuildingPiecesStruct_BuildingPieces, enum class EValid CallFunc_GetBuildingPiecesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasCraftingRequirements_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Icon_or_Missing_Output, bool CallFunc_BooleanAND_ReturnValue, const struct FBuildingLookup& CallFunc_GetBuildingLookupStruct_BuildingLookup, enum class EValid CallFunc_GetBuildingLookupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Building_C", "GetContextMenuItems");

	Params::UBP_ActionableBehaviour_Building_C_GetContextMenuItems_Params Parms{};

	Parms.RestrictVariations = RestrictVariations;
	Parms.LockVariations = LockVariations;
	Parms.ContextMenuItems = ContextMenuItems;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionFlags_ReturnValue = CallFunc_MakeLiteralSessionFlags_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasSessionFlag_ReturnValue = CallFunc_HasSessionFlag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralSessionFlags_ReturnValue_1 = CallFunc_MakeLiteralSessionFlags_ReturnValue_1;
	Parms.CallFunc_HasSessionFlag_ReturnValue_1 = CallFunc_HasSessionFlag_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBuildableData_BuildableData = CallFunc_GetBuildableData_BuildableData;
	Parms.CallFunc_GetBuildableData_Paths = CallFunc_GetBuildableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetBuildingPiecesStruct_BuildingPieces = CallFunc_GetBuildingPiecesStruct_BuildingPieces;
	Parms.CallFunc_GetBuildingPiecesStruct_Paths = CallFunc_GetBuildingPiecesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_HasCraftingRequirements_ReturnValue = CallFunc_HasCraftingRequirements_ReturnValue;
	Parms.CallFunc_Get_Icon_or_Missing_Output = CallFunc_Get_Icon_or_Missing_Output;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetBuildingLookupStruct_BuildingLookup = CallFunc_GetBuildingLookupStruct_BuildingLookup;
	Parms.CallFunc_GetBuildingLookupStruct_Paths = CallFunc_GetBuildingLookupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_MakeStruct_ContextMenuItemData = K2Node_MakeStruct_ContextMenuItemData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuItems != nullptr)
		*MenuItems = std::move(Parms.MenuItems);

}


// Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Building_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Building_C", "PerformAction");

	Params::UBP_ActionableBehaviour_Building_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.ReloadHeld
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Building_C::ReloadHeld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Building_C", "ReloadHeld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.MenuItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemIdentifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemPayload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Building_C::MenuItemSelected(class FName ItemIdentifier, int32 ItemPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Building_C", "MenuItemSelected");

	Params::UBP_ActionableBehaviour_Building_C_MenuItemSelected_Params Parms{};

	Parms.ItemIdentifier = ItemIdentifier;
	Parms.ItemPayload = ItemPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.OpenRadialMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Building_C::OpenRadialMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Building_C", "OpenRadialMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.OnContextMenuSegmentHighlightChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ContextMenu_Radial_Item_C*Segment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Building_C::OnContextMenuSegmentHighlightChanged(class UUMG_ContextMenu_Radial_Item_C* Segment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Building_C", "OnContextMenuSegmentHighlightChanged");

	Params::UBP_ActionableBehaviour_Building_C_OnContextMenuSegmentHighlightChanged_Params Parms{};

	Parms.Segment = Segment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.ExecuteUbergraph_BP_ActionableBehaviour_Building
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_PlayerBuildingPlacement_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_Event_ItemIdentifier                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ItemPayload                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ContextMenu_Radial_Item_C*K2Node_CustomEvent_Segment                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ContextMenu_Radial_C*   K2Node_DynamicCast_AsUMG_Context_Menu_Radial                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid_1             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Building_C::ExecuteUbergraph_BP_ActionableBehaviour_Building(int32 EntryPoint, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UBP_PlayerBuildingPlacement_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Event_ItemIdentifier, int32 K2Node_Event_ItemPayload, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid, class UUMG_ContextMenu_Radial_Item_C* K2Node_CustomEvent_Segment, class UUMG_ContextMenu_Radial_C* K2Node_DynamicCast_AsUMG_Context_Menu_Radial, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue_1, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Building_C", "ExecuteUbergraph_BP_ActionableBehaviour_Building");

	Params::UBP_ActionableBehaviour_Building_C_ExecuteUbergraph_BP_ActionableBehaviour_Building_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_ItemIdentifier = K2Node_Event_ItemIdentifier;
	Parms.K2Node_Event_ItemPayload = K2Node_Event_ItemPayload;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue = CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid = CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid;
	Parms.K2Node_CustomEvent_Segment = K2Node_CustomEvent_Segment;
	Parms.K2Node_DynamicCast_AsUMG_Context_Menu_Radial = K2Node_DynamicCast_AsUMG_Context_Menu_Radial;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue_1 = CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid_1 = CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


