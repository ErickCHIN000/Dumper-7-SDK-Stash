#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_WeatherSummonWeaterman.CF_WeatherSummonWeaterman_C
// (None)

class UClass* UCF_WeatherSummonWeaterman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_WeatherSummonWeaterman_C");

	return Clss;
}


// CF_WeatherSummonWeaterman_C CF_WeatherSummonWeaterman.Default__CF_WeatherSummonWeaterman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_WeatherSummonWeaterman_C* UCF_WeatherSummonWeaterman_C::GetDefaultObj()
{
	static class UCF_WeatherSummonWeaterman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_WeatherSummonWeaterman_C*>(UCF_WeatherSummonWeaterman_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_WeatherSummonWeaterman.CF_WeatherSummonWeaterman_C.OnLoaded_D10C360D44FF2B87793EC4969C2F7A0E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCF_WeatherSummonWeaterman_C::OnLoaded_D10C360D44FF2B87793EC4969C2F7A0E(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherSummonWeaterman_C", "OnLoaded_D10C360D44FF2B87793EC4969C2F7A0E");

	Params::UCF_WeatherSummonWeaterman_C_OnLoaded_D10C360D44FF2B87793EC4969C2F7A0E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_WeatherSummonWeaterman.CF_WeatherSummonWeaterman_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_WeatherSummonWeaterman_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherSummonWeaterman_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_WeatherSummonWeaterman.CF_WeatherSummonWeaterman_C.ExecuteUbergraph_CF_WeatherSummonWeaterman
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_WeatherSummonWeaterman_C::ExecuteUbergraph_CF_WeatherSummonWeaterman(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UUserWidget* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherSummonWeaterman_C", "ExecuteUbergraph_CF_WeatherSummonWeaterman");

	Params::UCF_WeatherSummonWeaterman_C_ExecuteUbergraph_CF_WeatherSummonWeaterman_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetCheatOverlay_ReturnValue = CallFunc_GetCheatOverlay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


