#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C
// (None)

class UClass* UWBP_sw_BuildModeFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_BuildModeFeedback_C");

	return Clss;
}


// WBP_sw_BuildModeFeedback_C WBP_sw_BuildModeFeedback.Default__WBP_sw_BuildModeFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_BuildModeFeedback_C* UWBP_sw_BuildModeFeedback_C::GetDefaultObj()
{
	static class UWBP_sw_BuildModeFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_BuildModeFeedback_C*>(UWBP_sw_BuildModeFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Update Trait Name
// (Exec, Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UWBP_sw_BuildModeFeedback_C::Update_Trait_Name()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Update Trait Name");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Update Trait Description
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_BuildModeFeedback_C::Update_Trait_Description()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Update Trait Description");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Update Trait Icons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_BuildModeFeedback_C::Update_Trait_Icons(bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Update Trait Icons");

	Params::UWBP_sw_BuildModeFeedback_C_Update_Trait_Icons_Params Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Update Trait Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_BuildModeFeedback_C::Update_Trait_Visibility(bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Update Trait Visibility");

	Params::UWBP_sw_BuildModeFeedback_C_Update_Trait_Visibility_Params Parms{};

	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Update Bottom Divider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_BuildModeFeedback_C::Update_Bottom_Divider(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Update Bottom Divider");

	Params::UWBP_sw_BuildModeFeedback_C_Update_Bottom_Divider_Params Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Update Polarity Signs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsPositiveTrait                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_BuildModeFeedback_C::Update_Polarity_Signs(bool bIsPositiveTrait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Update Polarity Signs");

	Params::UWBP_sw_BuildModeFeedback_C_Update_Polarity_Signs_Params Parms{};

	Parms.bIsPositiveTrait = bIsPositiveTrait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_BuildModeFeedback_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_BuildModeFeedback_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_BuildModeFeedback.WBP_sw_BuildModeFeedback_C.ExecuteUbergraph_WBP_sw_BuildModeFeedback
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_BuildModeFeedback_C::ExecuteUbergraph_WBP_sw_BuildModeFeedback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildModeFeedback_C", "ExecuteUbergraph_WBP_sw_BuildModeFeedback");

	Params::UWBP_sw_BuildModeFeedback_C_ExecuteUbergraph_WBP_sw_BuildModeFeedback_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


