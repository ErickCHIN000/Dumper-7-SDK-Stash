#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SimplePlayerCoinDisplay.WBP_SimplePlayerCoinDisplay_C
// (None)

class UClass* UWBP_SimplePlayerCoinDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SimplePlayerCoinDisplay_C");

	return Clss;
}


// WBP_SimplePlayerCoinDisplay_C WBP_SimplePlayerCoinDisplay.Default__WBP_SimplePlayerCoinDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SimplePlayerCoinDisplay_C* UWBP_SimplePlayerCoinDisplay_C::GetDefaultObj()
{
	static class UWBP_SimplePlayerCoinDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SimplePlayerCoinDisplay_C*>(UWBP_SimplePlayerCoinDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SimplePlayerCoinDisplay.WBP_SimplePlayerCoinDisplay_C.Get_BlueOrbText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWBP_SimplePlayerCoinDisplay_C::Get_BlueOrbText_Text_0(class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimplePlayerCoinDisplay_C", "Get_BlueOrbText_Text_0");

	Params::UWBP_SimplePlayerCoinDisplay_C_Get_BlueOrbText_Text_0_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SimplePlayerCoinDisplay.WBP_SimplePlayerCoinDisplay_C.Get_Text_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWBP_SimplePlayerCoinDisplay_C::Get_Text_Text_0(class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimplePlayerCoinDisplay_C", "Get_Text_Text_0");

	Params::UWBP_SimplePlayerCoinDisplay_C_Get_Text_Text_0_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


