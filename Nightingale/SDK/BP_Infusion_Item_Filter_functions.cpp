#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Infusion_Item_Filter.BP_Infusion_Item_Filter_C
// (None)

class UClass* UBP_Infusion_Item_Filter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Infusion_Item_Filter_C");

	return Clss;
}


// BP_Infusion_Item_Filter_C BP_Infusion_Item_Filter.Default__BP_Infusion_Item_Filter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Infusion_Item_Filter_C* UBP_Infusion_Item_Filter_C::GetDefaultObj()
{
	static class UBP_Infusion_Item_Filter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Infusion_Item_Filter_C*>(UBP_Infusion_Item_Filter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Infusion_Item_Filter.BP_Infusion_Item_Filter_C.ShouldShowEntry
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSlotInfusionOnItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanEnchantItem_CanEnchant                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_Infusion_Item_Filter_C::ShouldShowEntry(struct FInventoryEntry& Entry, bool CallFunc_CanSlotInfusionOnItem_ReturnValue, bool CallFunc_CanEnchantItem_CanEnchant, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Infusion_Item_Filter_C", "ShouldShowEntry");

	Params::UBP_Infusion_Item_Filter_C_ShouldShowEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.CallFunc_CanSlotInfusionOnItem_ReturnValue = CallFunc_CanSlotInfusionOnItem_ReturnValue;
	Parms.CallFunc_CanEnchantItem_CanEnchant = CallFunc_CanEnchantItem_CanEnchant;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Infusion_Item_Filter.BP_Infusion_Item_Filter_C.Initialize
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Infusion_Item_Filter_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Infusion_Item_Filter_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Infusion_Item_Filter.BP_Infusion_Item_Filter_C.ExecuteUbergraph_BP_Infusion_Item_Filter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetAllLayerTags_ReturnValue                             (ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_FindWindowInLayers_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ActionSlots_Popup_C*    K2Node_DynamicCast_AsWBP_Action_Slots_Popup                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Infusion_Item_Filter_C::ExecuteUbergraph_BP_Infusion_Item_Filter(int32 EntryPoint, TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue, class UWBP_ActionSlots_Popup_C* K2Node_DynamicCast_AsWBP_Action_Slots_Popup, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Infusion_Item_Filter_C", "ExecuteUbergraph_BP_Infusion_Item_Filter");

	Params::UBP_Infusion_Item_Filter_C_ExecuteUbergraph_BP_Infusion_Item_Filter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllLayerTags_ReturnValue = CallFunc_GetAllLayerTags_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindWindowInLayers_ReturnValue = CallFunc_FindWindowInLayers_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Action_Slots_Popup = K2Node_DynamicCast_AsWBP_Action_Slots_Popup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


