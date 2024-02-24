#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C
// (Actor)

class UClass* ABP_ZoneMap_ChallengePOI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMap_ChallengePOI_C");

	return Clss;
}


// BP_ZoneMap_ChallengePOI_C BP_ZoneMap_ChallengePOI.Default__BP_ZoneMap_ChallengePOI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZoneMap_ChallengePOI_C* ABP_ZoneMap_ChallengePOI_C::GetDefaultObj()
{
	static class ABP_ZoneMap_ChallengePOI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZoneMap_ChallengePOI_C*>(ABP_ZoneMap_ChallengePOI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ABP_ZoneMap_ChallengePOI_C::UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_ChallengePOI_C", "UserConstructionScript");

	Params::ABP_ZoneMap_ChallengePOI_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_ChallengePOI_C::Activate_POI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_ChallengePOI_C", "Activate POI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_ChallengePOI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_ChallengePOI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_ChallengePOI_C::Begin_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_ChallengePOI_C", "Begin Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_ChallengePOI_C::End_Zone_Map_Cursor_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_ChallengePOI_C", "End Zone Map Cursor Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.K2_OnChallengeUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_ChallengePOI_C::K2_OnChallengeUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_ChallengePOI_C", "K2_OnChallengeUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C.ExecuteUbergraph_BP_ZoneMap_ChallengePOI
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetChallengeIconTexture_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_ChallengePOI_C::ExecuteUbergraph_BP_ZoneMap_ChallengePOI(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UTexture2D* CallFunc_GetChallengeIconTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_ChallengePOI_C", "ExecuteUbergraph_BP_ZoneMap_ChallengePOI");

	Params::ABP_ZoneMap_ChallengePOI_C_ExecuteUbergraph_BP_ZoneMap_ChallengePOI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetChallengeIconTexture_ReturnValue = CallFunc_GetChallengeIconTexture_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


