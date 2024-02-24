#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CraftingResource.wid_CraftingResource_C
// (None)

class UClass* UWid_CraftingResource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CraftingResource_C");

	return Clss;
}


// wid_CraftingResource_C wid_CraftingResource.Default__wid_CraftingResource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CraftingResource_C* UWid_CraftingResource_C::GetDefaultObj()
{
	static class UWid_CraftingResource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CraftingResource_C*>(UWid_CraftingResource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CraftingResource.wid_CraftingResource_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWid_CraftingResource_C::GetText_0(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingResource_C", "GetText_0");

	Params::UWid_CraftingResource_C_GetText_0_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_CraftingResource.wid_CraftingResource_C.GetContentColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWid_CraftingResource_C::GetContentColorAndOpacity_0(const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingResource_C", "GetContentColorAndOpacity_0");

	Params::UWid_CraftingResource_C_GetContentColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_CraftingResource.wid_CraftingResource_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CraftingResource_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingResource_C", "PreConstruct");

	Params::UWid_CraftingResource_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingResource.wid_CraftingResource_C.ForceUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CraftingResource_C::ForceUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingResource_C", "ForceUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CraftingResource.wid_CraftingResource_C.ExecuteUbergraph_wid_CraftingResource
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetItemData_Data                                        (None)
// struct FLinearColor                CallFunc_GetContentColorAndOpacity_0_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_0_ReturnValue                                   (None)

void UWid_CraftingResource_C::ExecuteUbergraph_wid_CraftingResource(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FItemEntry& CallFunc_GetItemData_Data, const struct FLinearColor& CallFunc_GetContentColorAndOpacity_0_ReturnValue, class FText CallFunc_GetText_0_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingResource_C", "ExecuteUbergraph_wid_CraftingResource");

	Params::UWid_CraftingResource_C_ExecuteUbergraph_wid_CraftingResource_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetItemData_Data = CallFunc_GetItemData_Data;
	Parms.CallFunc_GetContentColorAndOpacity_0_ReturnValue = CallFunc_GetContentColorAndOpacity_0_ReturnValue;
	Parms.CallFunc_GetText_0_ReturnValue = CallFunc_GetText_0_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


