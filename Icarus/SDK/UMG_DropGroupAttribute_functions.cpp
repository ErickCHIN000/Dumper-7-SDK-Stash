#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropGroupAttribute.UMG_DropGroupAttribute_C
// (None)

class UClass* UUMG_DropGroupAttribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropGroupAttribute_C");

	return Clss;
}


// UMG_DropGroupAttribute_C UMG_DropGroupAttribute.Default__UMG_DropGroupAttribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropGroupAttribute_C* UUMG_DropGroupAttribute_C::GetDefaultObj()
{
	static class UUMG_DropGroupAttribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropGroupAttribute_C*>(UUMG_DropGroupAttribute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropGroupAttribute.UMG_DropGroupAttribute_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DropGroupAttribute_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropGroupAttribute_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropGroupAttribute.UMG_DropGroupAttribute_C.ExecuteUbergraph_UMG_DropGroupAttribute
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BasicTooltip_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUMG_DropGroupAttribute_C::ExecuteUbergraph_UMG_DropGroupAttribute(int32 EntryPoint, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropGroupAttribute_C", "ExecuteUbergraph_UMG_DropGroupAttribute");

	Params::UUMG_DropGroupAttribute_C_ExecuteUbergraph_UMG_DropGroupAttribute_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


