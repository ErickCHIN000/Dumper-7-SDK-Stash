#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C
// (None)

class UClass* UBP_MenuDataEntry_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuDataEntry_Crafting_C");

	return Clss;
}


// BP_MenuDataEntry_Crafting_C BP_MenuDataEntry_Crafting.Default__BP_MenuDataEntry_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuDataEntry_Crafting_C* UBP_MenuDataEntry_Crafting_C::GetDefaultObj()
{
	static class UBP_MenuDataEntry_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuDataEntry_Crafting_C*>(UBP_MenuDataEntry_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.TogglePinnedState
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPinned_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_UI_GoalTracking_C>CallFunc_TrackCraftingEntity_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuDataEntry_Crafting_C::TogglePinnedState(bool CallFunc_IsPinned_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> CallFunc_TrackCraftingEntity_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Crafting_C", "TogglePinnedState");

	Params::UBP_MenuDataEntry_Crafting_C_TogglePinnedState_Params Parms{};

	Parms.CallFunc_IsPinned_ReturnValue = CallFunc_IsPinned_ReturnValue;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent = CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_TrackCraftingEntity_self_CastInput = CallFunc_TrackCraftingEntity_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.IsPinned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_UI_GoalTracking_C>K2Node_DynamicCast_AsBPI_UI_Goal_Tracking                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEntityPinned_IsPinned                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MenuDataEntry_Crafting_C::IsPinned(const struct FGuid& CallFunc_GetID_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const class FString& CallFunc_Conv_GuidToString_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsEntityPinned_IsPinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Crafting_C", "IsPinned");

	Params::UBP_MenuDataEntry_Crafting_C_IsPinned_Params Parms{};

	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent = CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_UI_Goal_Tracking = K2Node_DynamicCast_AsBPI_UI_Goal_Tracking;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsEntityPinned_IsPinned = CallFunc_IsEntityPinned_IsPinned;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.GetTooltipWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Tooltip_CraftingEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_MenuDataEntry_Crafting_C::GetTooltipWidget(class UWBP_Tooltip_CraftingEntry_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Crafting_C", "GetTooltipWidget");

	Params::UBP_MenuDataEntry_Crafting_C_GetTooltipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.IsCraftable
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCraftable_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)
// bool                               CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots            (ReferenceParm)

bool UBP_MenuDataEntry_Crafting_C::IsCraftable(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, bool CallFunc_IsCraftable_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, bool CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet, TArray<int32>& CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Crafting_C", "IsCraftable");

	Params::UBP_MenuDataEntry_Crafting_C_IsCraftable_Params Parms{};

	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_IsCraftable_ReturnValue = CallFunc_IsCraftable_ReturnValue;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;
	Parms.CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet = CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet;
	Parms.CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots = CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C.CalculateMissingSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAllMet                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      OutUnmetSlots                                                    (Parm, OutParm)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)
// bool                               CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots            (ReferenceParm)

void UBP_MenuDataEntry_Crafting_C::CalculateMissingSlots(bool* bAllMet, TArray<int32>* OutUnmetSlots, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, bool CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet, TArray<int32>& CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Crafting_C", "CalculateMissingSlots");

	Params::UBP_MenuDataEntry_Crafting_C_CalculateMissingSlots_Params Parms{};

	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;
	Parms.CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet = CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet;
	Parms.CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots = CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllMet != nullptr)
		*bAllMet = Parms.bAllMet;

	if (OutUnmetSlots != nullptr)
		*OutUnmetSlots = std::move(Parms.OutUnmetSlots);

}

}


