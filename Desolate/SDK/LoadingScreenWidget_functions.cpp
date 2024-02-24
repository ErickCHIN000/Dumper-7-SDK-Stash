#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadingScreenWidget.LoadingScreenWidget_C
// (None)

class UClass* ULoadingScreenWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenWidget_C");

	return Clss;
}


// LoadingScreenWidget_C LoadingScreenWidget.Default__LoadingScreenWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadingScreenWidget_C* ULoadingScreenWidget_C::GetDefaultObj()
{
	static class ULoadingScreenWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreenWidget_C*>(ULoadingScreenWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingScreenWidget.LoadingScreenWidget_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWidget_C::SetItem(int32 CallFunc_RandomIntegerInRange_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "SetItem");

	Params::ULoadingScreenWidget_C_SetItem_Params Parms{};

	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.Roll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::Roll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "Roll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.ExecuteUbergraph_LoadingScreenWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWidget_C::ExecuteUbergraph_LoadingScreenWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "ExecuteUbergraph_LoadingScreenWidget");

	Params::ULoadingScreenWidget_C_ExecuteUbergraph_LoadingScreenWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


