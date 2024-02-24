#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GalaxyPOI.BP_GalaxyPOI_C
// (Actor)

class UClass* ABP_GalaxyPOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GalaxyPOI_C");

	return Clss;
}


// BP_GalaxyPOI_C BP_GalaxyPOI.Default__BP_GalaxyPOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GalaxyPOI_C* ABP_GalaxyPOI_C::GetDefaultObj()
{
	static class ABP_GalaxyPOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GalaxyPOI_C*>(ABP_GalaxyPOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GalaxyPOI_C::UserConstructionScript(const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "UserConstructionScript");

	Params::ABP_GalaxyPOI_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GalaxyPOI_C::End_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "End Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GalaxyPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "Begin Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GalaxyPOI_C::Activate_POI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "Activate POI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GalaxyPOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.On Begin Zone Map Cursor Over
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GalaxyPOI_C::On_Begin_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "On Begin Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.On End Zone Map Cursor Over
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GalaxyPOI_C::On_End_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "On End Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalaxyPOI.BP_GalaxyPOI_C.ExecuteUbergraph_BP_GalaxyPOI
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ABP_GalaxyPOI_C::ExecuteUbergraph_BP_GalaxyPOI(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalaxyPOI_C", "ExecuteUbergraph_BP_GalaxyPOI");

	Params::ABP_GalaxyPOI_C_ExecuteUbergraph_BP_GalaxyPOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


