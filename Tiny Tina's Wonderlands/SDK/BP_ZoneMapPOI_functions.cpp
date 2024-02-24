#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMapPOI.BP_ZoneMapPOI_C
// (Actor)

class UClass* ABP_ZoneMapPOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMapPOI_C");

	return Clss;
}


// BP_ZoneMapPOI_C BP_ZoneMapPOI.Default__BP_ZoneMapPOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZoneMapPOI_C* ABP_ZoneMapPOI_C::GetDefaultObj()
{
	static class ABP_ZoneMapPOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZoneMapPOI_C*>(ABP_ZoneMapPOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void ABP_ZoneMapPOI_C::UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapPOI_C", "UserConstructionScript");

	Params::ABP_ZoneMapPOI_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMapPOI_C::Activate_POI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapPOI_C", "Activate POI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZoneMapPOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapPOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMapPOI_C::Begin_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapPOI_C", "Begin Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMapPOI_C::End_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapPOI_C", "End Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMapPOI.BP_ZoneMapPOI_C.ExecuteUbergraph_BP_ZoneMapPOI
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMapPOI_C::ExecuteUbergraph_BP_ZoneMapPOI(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMapPOI_C", "ExecuteUbergraph_BP_ZoneMapPOI");

	Params::ABP_ZoneMapPOI_C_ExecuteUbergraph_BP_ZoneMapPOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


