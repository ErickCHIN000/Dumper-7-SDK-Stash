#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_Shaman_Totem.AuxActor_Shaman_Totem_C
// (Actor)

class UClass* AAuxActor_Shaman_Totem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_Shaman_Totem_C");

	return Clss;
}


// AuxActor_Shaman_Totem_C AuxActor_Shaman_Totem.Default__AuxActor_Shaman_Totem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_Shaman_Totem_C* AAuxActor_Shaman_Totem_C::GetDefaultObj()
{
	static class AAuxActor_Shaman_Totem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_Shaman_Totem_C*>(AAuxActor_Shaman_Totem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_Shaman_Totem.AuxActor_Shaman_Totem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Totem_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Totem_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Totem.AuxActor_Shaman_Totem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Totem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Totem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Totem.AuxActor_Shaman_Totem_C.DigiOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Totem_C::DigiOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Totem_C", "DigiOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Totem.AuxActor_Shaman_Totem_C.InterruptDigi
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Totem_C::InterruptDigi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Totem_C", "InterruptDigi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Totem.AuxActor_Shaman_Totem_C.SpawnTotem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Totem_C::SpawnTotem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Totem_C", "SpawnTotem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Totem.AuxActor_Shaman_Totem_C.ExecuteUbergraph_AuxActor_Shaman_Totem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_Shaman_Totem_C::ExecuteUbergraph_AuxActor_Shaman_Totem(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Totem_C", "ExecuteUbergraph_AuxActor_Shaman_Totem");

	Params::AAuxActor_Shaman_Totem_C_ExecuteUbergraph_AuxActor_Shaman_Totem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


