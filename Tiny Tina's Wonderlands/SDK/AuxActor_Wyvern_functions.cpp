#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_Wyvern.AuxActor_Wyvern_C
// (Actor)

class UClass* AAuxActor_Wyvern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_Wyvern_C");

	return Clss;
}


// AuxActor_Wyvern_C AuxActor_Wyvern.Default__AuxActor_Wyvern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_Wyvern_C* AAuxActor_Wyvern_C::GetDefaultObj()
{
	static class AAuxActor_Wyvern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_Wyvern_C*>(AAuxActor_Wyvern_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_Wyvern.AuxActor_Wyvern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Wyvern_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Wyvern_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Wyvern.AuxActor_Wyvern_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_Wyvern_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Wyvern_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Wyvern.AuxActor_Wyvern_C.ExecuteUbergraph_AuxActor_Wyvern
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingClass_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAuxActor_Wyvern_C::ExecuteUbergraph_AuxActor_Wyvern(int32 EntryPoint, bool CallFunc_IsPlayingClass_ReturnValue, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, bool CallFunc_IsPlayingClass_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Wyvern_C", "ExecuteUbergraph_AuxActor_Wyvern");

	Params::AAuxActor_Wyvern_C_ExecuteUbergraph_AuxActor_Wyvern_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPlayingClass_ReturnValue = CallFunc_IsPlayingClass_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_IsPlayingClass_ReturnValue1 = CallFunc_IsPlayingClass_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


