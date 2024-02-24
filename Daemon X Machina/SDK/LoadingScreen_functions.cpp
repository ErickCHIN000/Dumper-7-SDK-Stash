#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadingScreen.LoadingScreen_C
// (Actor)

class UClass* ALoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreen_C");

	return Clss;
}


// LoadingScreen_C LoadingScreen.Default__LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoadingScreen_C* ALoadingScreen_C::GetDefaultObj()
{
	static class ALoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoadingScreen_C*>(ALoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingScreen.LoadingScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoadingScreen_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.SetupContents
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoadingScreen_C::SetupContents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "SetupContents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCmn_load_top00_C*           K2Node_DynamicCast_AsCmn_Load_Top_00                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCmn_load_top00_C*           K2Node_DynamicCast_AsCmn_Load_Top_001                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCmn_load_icon00_C*          K2Node_DynamicCast_AsCmn_Load_Icon_00                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALoadingScreen_C::ExecuteUbergraph_LoadingScreen(int32 EntryPoint, class UCmn_load_top00_C* K2Node_DynamicCast_AsCmn_Load_Top_00, bool K2Node_DynamicCast_bSuccess, class UCmn_load_top00_C* K2Node_DynamicCast_AsCmn_Load_Top_001, bool K2Node_DynamicCast_bSuccess1, class UCmn_load_icon00_C* K2Node_DynamicCast_AsCmn_Load_Icon_00, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "ExecuteUbergraph_LoadingScreen");

	Params::ALoadingScreen_C_ExecuteUbergraph_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsCmn_Load_Top_00 = K2Node_DynamicCast_AsCmn_Load_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCmn_Load_Top_001 = K2Node_DynamicCast_AsCmn_Load_Top_001;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsCmn_Load_Icon_00 = K2Node_DynamicCast_AsCmn_Load_Icon_00;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}


