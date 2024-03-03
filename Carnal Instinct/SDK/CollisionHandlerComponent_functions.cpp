#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollisionHandlerComponent.CollisionHandlerComponent_C
// (None)

class UClass* UCollisionHandlerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollisionHandlerComponent_C");

	return Clss;
}


// CollisionHandlerComponent_C CollisionHandlerComponent.Default__CollisionHandlerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollisionHandlerComponent_C* UCollisionHandlerComponent_C::GetDefaultObj()
{
	static class UCollisionHandlerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollisionHandlerComponent_C*>(UCollisionHandlerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.AddHitActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHitActorsIndex_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollisionHandlerComponent_C::AddHitActor(class UPrimitiveComponent* Component, class AActor* HitActor, int32 CallFunc_GetHitActorsIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "AddHitActor");

	Params::UCollisionHandlerComponent_C_AddHitActor_Params Parms{};

	Parms.Component = Component;
	Parms.HitActor = HitActor;
	Parms.CallFunc_GetHitActorsIndex_Index = CallFunc_GetHitActorsIndex_Index;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.GetHitActors
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              HitActors                                                        (Parm, OutParm)
// int32                              CallFunc_GetHitActorsIndex_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FF_CollCompHitActors        K2Node_MakeStruct_F_CollCompHitActors                            (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollisionHandlerComponent_C::GetHitActors(class UPrimitiveComponent* Component, TArray<class AActor*>* HitActors, int32 CallFunc_GetHitActorsIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FF_CollCompHitActors& K2Node_MakeStruct_F_CollCompHitActors, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "GetHitActors");

	Params::UCollisionHandlerComponent_C_GetHitActors_Params Parms{};

	Parms.Component = Component;
	Parms.CallFunc_GetHitActorsIndex_Index = CallFunc_GetHitActorsIndex_Index;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_F_CollCompHitActors = K2Node_MakeStruct_F_CollCompHitActors;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HitActors != nullptr)
		*HitActors = std::move(Parms.HitActors);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.GetHitActorsIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_CollCompHitActors        CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollisionHandlerComponent_C::GetHitActorsIndex(class UPrimitiveComponent* Component, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_CollCompHitActors& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "GetHitActorsIndex");

	Params::UCollisionHandlerComponent_C_GetHitActorsIndex_Params Parms{};

	Parms.Component = Component;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.GetUniqueSocketName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollisionHandlerComponent_C::GetUniqueSocketName(class UPrimitiveComponent* Component, class FName SocketName, class FName* UniqueName, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "GetUniqueSocketName");

	Params::UCollisionHandlerComponent_C_GetUniqueSocketName_Params Parms{};

	Parms.Component = Component;
	Parms.SocketName = SocketName;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueName != nullptr)
		*UniqueName = Parms.UniqueName;

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.IsCollisionActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollisionHandlerComponent_C::IsCollisionActive(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "IsCollisionActive");

	Params::UCollisionHandlerComponent_C_IsCollisionActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.IsIgnoredClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      TestClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCollisionHandlerComponent_C::IsIgnoredClass(class UClass* TestClass, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "IsIgnoredClass");

	Params::UCollisionHandlerComponent_C_IsIgnoredClass_Params Parms{};

	Parms.TestClass = TestClass;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.SetCollisionMesh
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Sockets                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCollisionHandlerComponent_C::SetCollisionMesh(class UPrimitiveComponent* WeaponMesh, TArray<class FName>& Sockets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "SetCollisionMesh");

	Params::UCollisionHandlerComponent_C_SetCollisionMesh_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.Sockets = Sockets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.ActivateCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         CollisionPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollisionHandlerComponent_C::ActivateCollision(enum class E_CollisionPart CollisionPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "ActivateCollision");

	Params::UCollisionHandlerComponent_C_ActivateCollision_Params Parms{};

	Parms.CollisionPart = CollisionPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.DeactivateCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollisionHandlerComponent_C::DeactivateCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "DeactivateCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.UpdateLastSocketPositions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollisionHandlerComponent_C::UpdateLastSocketPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "UpdateLastSocketPositions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollisionHandlerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "ReceiveTick");

	Params::UCollisionHandlerComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.PerformTrace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollisionHandlerComponent_C::PerformTrace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "PerformTrace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.SetCollisionMeshes
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FF_CollisionComponent>CollComps                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCollisionHandlerComponent_C::SetCollisionMeshes(TArray<struct FF_CollisionComponent>& CollComps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "SetCollisionMeshes");

	Params::UCollisionHandlerComponent_C_SetCollisionMeshes_Params Parms{};

	Parms.CollComps = CollComps;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.ReactiveCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollisionHandlerComponent_C::ReactiveCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "ReactiveCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.SetGiantCollisionMesh
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Sockets                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCollisionHandlerComponent_C::SetGiantCollisionMesh(class UPrimitiveComponent* WeaponMesh, TArray<class FName>& Sockets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "SetGiantCollisionMesh");

	Params::UCollisionHandlerComponent_C_SetGiantCollisionMesh_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.Sockets = Sockets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.SetMouthBigCollsionMesh
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Sockets                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCollisionHandlerComponent_C::SetMouthBigCollsionMesh(class UPrimitiveComponent* WeaponMesh, TArray<class FName>& Sockets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "SetMouthBigCollsionMesh");

	Params::UCollisionHandlerComponent_C_SetMouthBigCollsionMesh_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.Sockets = Sockets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.ExecuteUbergraph_CollisionHandlerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_WeaponMesh_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Sockets_2                                     (ConstParm, ReferenceParm)
// enum class E_CollisionPart         K2Node_CustomEvent_CollisionPart                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_CollisionComponent       K2Node_MakeStruct_F_CollisionComponent                           (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FF_CollisionComponent>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FF_CollisionComponent>K2Node_CustomEvent_CollComps                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FF_CollisionComponent       CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUniqueSocketName_UniqueName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_CollisionComponent       CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUniqueSocketName_UniqueName_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetHitActors_HitActors                                  (ReferenceParm)
// TArray<class AActor*>              CallFunc_GetHitActors_HitActors_1                                (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_Array_Get_Item_4                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIgnoredClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_CustomEvent_WeaponMesh_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Sockets_1                                     (ConstParm, ReferenceParm)
// struct FF_CollisionComponent       K2Node_MakeStruct_F_CollisionComponent_1                         (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FF_CollisionComponent>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_CustomEvent_WeaponMesh                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Sockets                                       (ConstParm, ReferenceParm)
// struct FF_CollisionComponent       K2Node_MakeStruct_F_CollisionComponent_2                         (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FF_CollisionComponent>K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, ContainsInstancedReference)

void UCollisionHandlerComponent_C::ExecuteUbergraph_CollisionHandlerComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UPrimitiveComponent* K2Node_CustomEvent_WeaponMesh_2, TArray<class FName>& K2Node_CustomEvent_Sockets_2, enum class E_CollisionPart K2Node_CustomEvent_CollisionPart, const struct FF_CollisionComponent& K2Node_MakeStruct_F_CollisionComponent, TArray<struct FF_CollisionComponent>& K2Node_MakeArray_Array, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, TArray<struct FF_CollisionComponent>& K2Node_CustomEvent_CollComps, const struct FF_CollisionComponent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item_1, class FName CallFunc_GetUniqueSocketName_UniqueName, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_4, const struct FF_CollisionComponent& CallFunc_Array_Get_Item_2, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, class FName CallFunc_GetUniqueSocketName_UniqueName_1, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_GetHitActors_HitActors, TArray<class AActor*>& CallFunc_GetHitActors_HitActors_1, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsIgnoredClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_WeaponMesh_1, TArray<class FName>& K2Node_CustomEvent_Sockets_1, const struct FF_CollisionComponent& K2Node_MakeStruct_F_CollisionComponent_1, TArray<struct FF_CollisionComponent>& K2Node_MakeArray_Array_1, class UPrimitiveComponent* K2Node_CustomEvent_WeaponMesh, TArray<class FName>& K2Node_CustomEvent_Sockets, const struct FF_CollisionComponent& K2Node_MakeStruct_F_CollisionComponent_2, TArray<struct FF_CollisionComponent>& K2Node_MakeArray_Array_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "ExecuteUbergraph_CollisionHandlerComponent");

	Params::UCollisionHandlerComponent_C_ExecuteUbergraph_CollisionHandlerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CustomEvent_WeaponMesh_2 = K2Node_CustomEvent_WeaponMesh_2;
	Parms.K2Node_CustomEvent_Sockets_2 = K2Node_CustomEvent_Sockets_2;
	Parms.K2Node_CustomEvent_CollisionPart = K2Node_CustomEvent_CollisionPart;
	Parms.K2Node_MakeStruct_F_CollisionComponent = K2Node_MakeStruct_F_CollisionComponent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_CustomEvent_CollComps = K2Node_CustomEvent_CollComps;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetUniqueSocketName_UniqueName = CallFunc_GetUniqueSocketName_UniqueName;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetUniqueSocketName_UniqueName_1 = CallFunc_GetUniqueSocketName_UniqueName_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetHitActors_HitActors = CallFunc_GetHitActors_HitActors;
	Parms.CallFunc_GetHitActors_HitActors_1 = CallFunc_GetHitActors_HitActors_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetCollisionProfileName_ReturnValue = CallFunc_GetCollisionProfileName_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_IsIgnoredClass_ReturnValue = CallFunc_IsIgnoredClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_WeaponMesh_1 = K2Node_CustomEvent_WeaponMesh_1;
	Parms.K2Node_CustomEvent_Sockets_1 = K2Node_CustomEvent_Sockets_1;
	Parms.K2Node_MakeStruct_F_CollisionComponent_1 = K2Node_MakeStruct_F_CollisionComponent_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_WeaponMesh = K2Node_CustomEvent_WeaponMesh;
	Parms.K2Node_CustomEvent_Sockets = K2Node_CustomEvent_Sockets;
	Parms.K2Node_MakeStruct_F_CollisionComponent_2 = K2Node_MakeStruct_F_CollisionComponent_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.OnCollisionReactived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollisionHandlerComponent_C::OnCollisionReactived__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "OnCollisionReactived__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.OnCollisionDeactivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollisionHandlerComponent_C::OnCollisionDeactivated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "OnCollisionDeactivated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.OnCollisionActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         CollisionPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollisionHandlerComponent_C::OnCollisionActivated__DelegateSignature(enum class E_CollisionPart CollisionPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "OnCollisionActivated__DelegateSignature");

	Params::UCollisionHandlerComponent_C_OnCollisionActivated__DelegateSignature_Params Parms{};

	Parms.CollisionPart = CollisionPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollisionHandlerComponent.CollisionHandlerComponent_C.OnHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UCollisionHandlerComponent_C::OnHit__DelegateSignature(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionHandlerComponent_C", "OnHit__DelegateSignature");

	Params::UCollisionHandlerComponent_C_OnHit__DelegateSignature_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


