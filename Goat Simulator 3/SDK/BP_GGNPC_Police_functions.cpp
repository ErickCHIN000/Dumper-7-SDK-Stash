#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGNPC_Police.BP_GGNPC_Police_C
// (Actor, Pawn)

class UClass* ABP_GGNPC_Police_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGNPC_Police_C");

	return Clss;
}


// BP_GGNPC_Police_C BP_GGNPC_Police.Default__BP_GGNPC_Police_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGNPC_Police_C* ABP_GGNPC_Police_C::GetDefaultObj()
{
	static class ABP_GGNPC_Police_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGNPC_Police_C*>(ABP_GGNPC_Police_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGNPC_Police.BP_GGNPC_Police_C.OnLoaded_8F7D24694C82F721A577578B5AD69B0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_GGNPC_Police_C::OnLoaded_8F7D24694C82F721A577578B5AD69B0C(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Police_C", "OnLoaded_8F7D24694C82F721A577578B5AD69B0C");

	Params::ABP_GGNPC_Police_C_OnLoaded_8F7D24694C82F721A577578B5AD69B0C_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Police.BP_GGNPC_Police_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGNPC_Police_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Police_C", "ReceiveEndPlay");

	Params::ABP_GGNPC_Police_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Police.BP_GGNPC_Police_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Police_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Police_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Police.BP_GGNPC_Police_C.ExecuteUbergraph_BP_GGNPC_Police
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGNPC_Police_C::ExecuteUbergraph_BP_GGNPC_Police(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Police_C", "ExecuteUbergraph_BP_GGNPC_Police");

	Params::ABP_GGNPC_Police_C_ExecuteUbergraph_BP_GGNPC_Police_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


