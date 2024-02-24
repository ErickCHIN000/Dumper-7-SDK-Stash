#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C
// (Actor)

class UClass* AAuxActor_IceAxe_Slass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_IceAxe_Slass_C");

	return Clss;
}


// AuxActor_IceAxe_Slass_C AuxActor_IceAxe_Slass.Default__AuxActor_IceAxe_Slass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_IceAxe_Slass_C* AAuxActor_IceAxe_Slass_C::GetDefaultObj()
{
	static class AAuxActor_IceAxe_Slass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_IceAxe_Slass_C*>(AAuxActor_IceAxe_Slass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_IceAxe_Slass_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_IceAxe_Slass_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_IceAxe_Slass_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_IceAxe_Slass_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_IceAxe_Slass_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_IceAxe_Slass_C", "ReceiveEndPlay");

	Params::AAuxActor_IceAxe_Slass_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.DigiOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_IceAxe_Slass_C::DigiOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_IceAxe_Slass_C", "DigiOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.InterruptDigi
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_IceAxe_Slass_C::InterruptDigi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_IceAxe_Slass_C", "InterruptDigi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.ExecuteUbergraph_AuxActor_IceAxe_Slass
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_IceAxe_Slass_C::ExecuteUbergraph_AuxActor_IceAxe_Slass(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_IceAxe_Slass_C", "ExecuteUbergraph_AuxActor_IceAxe_Slass");

	Params::AAuxActor_IceAxe_Slass_C_ExecuteUbergraph_AuxActor_IceAxe_Slass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


