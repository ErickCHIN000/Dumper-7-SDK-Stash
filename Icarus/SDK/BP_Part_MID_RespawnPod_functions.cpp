#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C
// (Actor)

class UClass* ABP_Part_MID_RespawnPod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Part_MID_RespawnPod_C");

	return Clss;
}


// BP_Part_MID_RespawnPod_C BP_Part_MID_RespawnPod.Default__BP_Part_MID_RespawnPod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Part_MID_RespawnPod_C* ABP_Part_MID_RespawnPod_C::GetDefaultObj()
{
	static class ABP_Part_MID_RespawnPod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Part_MID_RespawnPod_C*>(ABP_Part_MID_RespawnPod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Update Fmod Dropship State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDropshipDescentStateFMODParamDropshipSequenceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_MID_RespawnPod_C::Update_Fmod_Dropship_State(enum class EDropshipDescentStateFMODParam DropshipSequenceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "Update Fmod Dropship State");

	Params::ABP_Part_MID_RespawnPod_C_Update_Fmod_Dropship_State_Params Parms{};

	Parms.DropshipSequenceState = DropshipSequenceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.ToggleFlightSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERocketState            DropShipState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Part_MID_RespawnPod_C::ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "ToggleFlightSFX");

	Params::ABP_Part_MID_RespawnPod_C_ToggleFlightSFX_Params Parms{};

	Parms.DropShipState = DropShipState;
	Parms.IsLocalPlayer = IsLocalPlayer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::OnRep_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "OnRep_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::OnRep_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "OnRep_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::OnRep_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "OnRep_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_ReEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::OnRep_ReEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "OnRep_ReEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.TriggerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropShipActionsEnum        Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Part_MID_RespawnPod_C::TriggerEvent(const struct FDropShipActionsEnum& Actions, bool K2Node_SwitchRowEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "TriggerEvent");

	Params::ABP_Part_MID_RespawnPod_C_TriggerEvent_Params Parms{};

	Parms.Actions = Actions;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_MID_RespawnPod_C::GetMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "GetMesh");

	Params::ABP_Part_MID_RespawnPod_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Fade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "Fade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Fade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "Fade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.DoorOpenTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::DoorOpenTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "DoorOpenTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.DoorOpenTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::DoorOpenTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "DoorOpenTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Show_RespawnPod_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::Show_RespawnPod_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "Show_RespawnPod_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Hide_RespawnPod_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::Hide_RespawnPod_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "Hide_RespawnPod_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Fade_Cone_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::Fade_Cone_FX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "Fade_Cone_FX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Part_MID_RespawnPod_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "ReceiveTick");

	Params::ABP_Part_MID_RespawnPod_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.StartOpening
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::StartOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "StartOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.ExecuteUbergraph_BP_Part_MID_RespawnPod
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children_1                        (ReferenceParm, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Part_MID_RespawnPod_C::ExecuteUbergraph_BP_Part_MID_RespawnPod(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "ExecuteUbergraph_BP_Part_MID_RespawnPod");

	Params::ABP_Part_MID_RespawnPod_C_ExecuteUbergraph_BP_Part_MID_RespawnPod_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetChildrenComponents_Children_1 = CallFunc_GetChildrenComponents_Children_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.DoorFinishedOpening__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Part_MID_RespawnPod_C::DoorFinishedOpening__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Part_MID_RespawnPod_C", "DoorFinishedOpening__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


