#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C
// (None)

class UClass* UBP_WidgetInventoryFilter_PlayerLoadout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WidgetInventoryFilter_PlayerLoadout_C");

	return Clss;
}


// BP_WidgetInventoryFilter_PlayerLoadout_C BP_WidgetInventoryFilter_PlayerLoadout.Default__BP_WidgetInventoryFilter_PlayerLoadout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WidgetInventoryFilter_PlayerLoadout_C* UBP_WidgetInventoryFilter_PlayerLoadout_C::GetDefaultObj()
{
	static class UBP_WidgetInventoryFilter_PlayerLoadout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WidgetInventoryFilter_PlayerLoadout_C*>(UBP_WidgetInventoryFilter_PlayerLoadout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C.ShouldShowLoadoutEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutSlot>        CallFunc_GetLoadoutSlots_LoadoutSlots                            (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutSlot                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WidgetInventoryFilter_PlayerLoadout_C::ShouldShowLoadoutEntry(const struct FInventoryEntry& Entry, bool* ShouldShow, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FLoadoutSlot>& CallFunc_GetLoadoutSlots_LoadoutSlots, bool CallFunc_IsValid_ReturnValue, const struct FLoadoutSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInventoryFilter_PlayerLoadout_C", "ShouldShowLoadoutEntry");

	Params::UBP_WidgetInventoryFilter_PlayerLoadout_C_ShouldShowLoadoutEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLoadoutSlots_LoadoutSlots = CallFunc_GetLoadoutSlots_LoadoutSlots;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C.ShouldShowEntry
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowLoadoutEntry_shouldShow                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_WidgetInventoryFilter_PlayerLoadout_C::ShouldShowEntry(struct FInventoryEntry& Entry, bool CallFunc_ShouldShowLoadoutEntry_shouldShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInventoryFilter_PlayerLoadout_C", "ShouldShowEntry");

	Params::UBP_WidgetInventoryFilter_PlayerLoadout_C_ShouldShowEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.CallFunc_ShouldShowLoadoutEntry_shouldShow = CallFunc_ShouldShowLoadoutEntry_shouldShow;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C.Initialize
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_WidgetInventoryFilter_PlayerLoadout_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInventoryFilter_PlayerLoadout_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C.ExecuteUbergraph_BP_WidgetInventoryFilter_PlayerLoadout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadoutComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WidgetInventoryFilter_PlayerLoadout_C::ExecuteUbergraph_BP_WidgetInventoryFilter_PlayerLoadout(int32 EntryPoint, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInventoryFilter_PlayerLoadout_C", "ExecuteUbergraph_BP_WidgetInventoryFilter_PlayerLoadout");

	Params::UBP_WidgetInventoryFilter_PlayerLoadout_C_ExecuteUbergraph_BP_WidgetInventoryFilter_PlayerLoadout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


