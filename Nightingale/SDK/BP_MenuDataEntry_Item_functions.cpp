#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuDataEntry_Item.BP_MenuDataEntry_Item_C
// (None)

class UClass* UBP_MenuDataEntry_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuDataEntry_Item_C");

	return Clss;
}


// BP_MenuDataEntry_Item_C BP_MenuDataEntry_Item.Default__BP_MenuDataEntry_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuDataEntry_Item_C* UBP_MenuDataEntry_Item_C::GetDefaultObj()
{
	static class UBP_MenuDataEntry_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuDataEntry_Item_C*>(UBP_MenuDataEntry_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuDataEntry_Item.BP_MenuDataEntry_Item_C.GetItemQuality
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EItemQuality            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)
// enum class EItemQuality            CallFunc_GetItemQualityFromEntry_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EItemQuality UBP_MenuDataEntry_Item_C::GetItemQuality(const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Item_C", "GetItemQuality");

	Params::UBP_MenuDataEntry_Item_C_GetItemQuality_Params Parms{};

	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;
	Parms.CallFunc_GetItemQualityFromEntry_ReturnValue = CallFunc_GetItemQualityFromEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Item.BP_MenuDataEntry_Item_C.GetTooltipWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ItemTooltip_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)

class UWidget* UBP_MenuDataEntry_Item_C::GetTooltipWidget(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Item_C", "GetTooltipWidget");

	Params::UBP_MenuDataEntry_Item_C_GetTooltipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


