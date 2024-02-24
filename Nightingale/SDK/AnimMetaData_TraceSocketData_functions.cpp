#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimMetaData_TraceSocketData.AnimMetaData_TraceSocketData_C
// (None)

class UClass* UAnimMetaData_TraceSocketData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimMetaData_TraceSocketData_C");

	return Clss;
}


// AnimMetaData_TraceSocketData_C AnimMetaData_TraceSocketData.Default__AnimMetaData_TraceSocketData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimMetaData_TraceSocketData_C* UAnimMetaData_TraceSocketData_C::GetDefaultObj()
{
	static class UAnimMetaData_TraceSocketData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimMetaData_TraceSocketData_C*>(UAnimMetaData_TraceSocketData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimMetaData_TraceSocketData.AnimMetaData_TraceSocketData_C.Get Is Mirrored
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsMirroredItem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimMetaData_TraceSocketData_C::Get_Is_Mirrored(bool* IsMirroredItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimMetaData_TraceSocketData_C", "Get Is Mirrored");

	Params::UAnimMetaData_TraceSocketData_C_Get_Is_Mirrored_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMirroredItem != nullptr)
		*IsMirroredItem = Parms.IsMirroredItem;

}


// Function AnimMetaData_TraceSocketData.AnimMetaData_TraceSocketData_C.Get Sockets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        TopSocket                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BottomSocket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MeleeSocket                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CreatureSocket                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimMetaData_TraceSocketData_C::Get_Sockets(class FName* TopSocket, class FName* BottomSocket, class FName* MeleeSocket, class FName* CreatureSocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimMetaData_TraceSocketData_C", "Get Sockets");

	Params::UAnimMetaData_TraceSocketData_C_Get_Sockets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TopSocket != nullptr)
		*TopSocket = Parms.TopSocket;

	if (BottomSocket != nullptr)
		*BottomSocket = Parms.BottomSocket;

	if (MeleeSocket != nullptr)
		*MeleeSocket = Parms.MeleeSocket;

	if (CreatureSocket != nullptr)
		*CreatureSocket = Parms.CreatureSocket;

}

}


