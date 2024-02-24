#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Event_LazyWorkers_Seq.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C Event_LazyWorkers_Seq.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_8");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_8_Params Parms{};

	Parms.BP_LazyWorkers_Worker = BP_LazyWorkers_Worker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker2                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_7");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_7_Params Parms{};

	Parms.BP_LazyWorkers_Worker2 = BP_LazyWorkers_Worker2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker4                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_6");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_6_Params Parms{};

	Parms.BP_LazyWorkers_Worker4 = BP_LazyWorkers_Worker4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker3                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_5");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_5_Params Parms{};

	Parms.BP_LazyWorkers_Worker3 = BP_LazyWorkers_Worker3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSound*               Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_4(class AAmbientSound* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_4");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_4_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSound*               Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_3(class AAmbientSound* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_3");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_3_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSound*               Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class AAmbientSound* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_2");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GenericNPC_LazyWorker_C* Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_GenericNPC_LazyWorker_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class UObject* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.PlaySequenceSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSound*               Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlaySequenceSFX(class AAmbientSound* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "PlaySequenceSFX");

	Params::USequenceDirector_C_PlaySequenceSFX_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.WakeNPCThatWasUnderContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GenericNPC_LazyWorker_C* Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::WakeNPCThatWasUnderContainer(class ABP_GenericNPC_LazyWorker_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "WakeNPCThatWasUnderContainer");

	Params::USequenceDirector_C_WakeNPCThatWasUnderContainer_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.ReplaceTheWorkersWithRealNPCs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LazyWorkers_Worker_C*    K2Node_DynamicCast_AsBP_Lazy_Workers_Worker                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ReplaceTheWorkersWithRealNPCs(class UObject* Target, class ABP_LazyWorkers_Worker_C* K2Node_DynamicCast_AsBP_Lazy_Workers_Worker, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ReplaceTheWorkersWithRealNPCs");

	Params::USequenceDirector_C_ReplaceTheWorkersWithRealNPCs_Params Parms{};

	Parms.Target = Target;
	Parms.K2Node_DynamicCast_AsBP_Lazy_Workers_Worker = K2Node_DynamicCast_AsBP_Lazy_Workers_Worker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.BP_LazyWorkers_Worker3_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker3                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_LazyWorkers_Worker3_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_LazyWorkers_Worker3_Event_0");

	Params::USequenceDirector_C_BP_LazyWorkers_Worker3_Event_0_Params Parms{};

	Parms.BP_LazyWorkers_Worker3 = BP_LazyWorkers_Worker3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.BP_LazyWorkers_Worker4_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker4                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_LazyWorkers_Worker4_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_LazyWorkers_Worker4_Event_0");

	Params::USequenceDirector_C_BP_LazyWorkers_Worker4_Event_0_Params Parms{};

	Parms.BP_LazyWorkers_Worker4 = BP_LazyWorkers_Worker4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.BP_LazyWorkers_Worker2_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker2                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_LazyWorkers_Worker2_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_LazyWorkers_Worker2_Event_0");

	Params::USequenceDirector_C_BP_LazyWorkers_Worker2_Event_0_Params Parms{};

	Parms.BP_LazyWorkers_Worker2 = BP_LazyWorkers_Worker2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.BP_LazyWorkers_Worker_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LazyWorkers_Worker_C*    BP_LazyWorkers_Worker                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_LazyWorkers_Worker_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_LazyWorkers_Worker_Event_0");

	Params::USequenceDirector_C_BP_LazyWorkers_Worker_Event_0_Params Parms{};

	Parms.BP_LazyWorkers_Worker = BP_LazyWorkers_Worker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Event_LazyWorkers_Seq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LazyWorkers_Worker_C*    K2Node_CustomEvent_BP_LazyWorkers_Worker                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LazyWorkers_Worker_C*    K2Node_CustomEvent_BP_LazyWorkers_Worker3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LazyWorkers_Worker_C*    K2Node_CustomEvent_BP_LazyWorkers_Worker4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LazyWorkers_Worker_C*    K2Node_CustomEvent_BP_LazyWorkers_Worker2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker3, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker4, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_BP_LazyWorkers_Worker = K2Node_CustomEvent_BP_LazyWorkers_Worker;
	Parms.K2Node_CustomEvent_BP_LazyWorkers_Worker3 = K2Node_CustomEvent_BP_LazyWorkers_Worker3;
	Parms.K2Node_CustomEvent_BP_LazyWorkers_Worker4 = K2Node_CustomEvent_BP_LazyWorkers_Worker4;
	Parms.K2Node_CustomEvent_BP_LazyWorkers_Worker2 = K2Node_CustomEvent_BP_LazyWorkers_Worker2;

	UObject::ProcessEvent(Func, &Parms);

}

}


