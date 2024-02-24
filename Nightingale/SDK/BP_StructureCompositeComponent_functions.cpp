#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureCompositeComponent.BP_StructureCompositeComponent_C
// (None)

class UClass* UBP_StructureCompositeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureCompositeComponent_C");

	return Clss;
}


// BP_StructureCompositeComponent_C BP_StructureCompositeComponent.Default__BP_StructureCompositeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureCompositeComponent_C* UBP_StructureCompositeComponent_C::GetDefaultObj()
{
	static class UBP_StructureCompositeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureCompositeComponent_C*>(UBP_StructureCompositeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureCompositeComponent.BP_StructureCompositeComponent_C.SpawnDroppedResource
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCompositePieceResourceDropContextResourceDropContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositeComponent_C::SpawnDroppedResource(struct FCompositePieceResourceDropContext& ResourceDropContext, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositeComponent_C", "SpawnDroppedResource");

	Params::UBP_StructureCompositeComponent_C_SpawnDroppedResource_Params Parms{};

	Parms.ResourceDropContext = ResourceDropContext;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositeComponent.BP_StructureCompositeComponent_C.RestoreStructureDataFromPersistence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_StructureCompositeComponent_C::RestoreStructureDataFromPersistence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositeComponent_C", "RestoreStructureDataFromPersistence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositeComponent.BP_StructureCompositeComponent_C.RestoreHealthFromPieces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Piece                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPieceCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    CallFunc_GetCompositePiece_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetPieceData_OutPieceData                               (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddPieceHealthToOwningStructure_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositeComponent_C::RestoreHealthFromPieces(class UAbilitySystemComponent* AbilitySystemComponent, class UObject* Piece, int32 Temp_int_Variable, int32 CallFunc_GetPieceCount_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePiece_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_AddPieceHealthToOwningStructure_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositeComponent_C", "RestoreHealthFromPieces");

	Params::UBP_StructureCompositeComponent_C_RestoreHealthFromPieces_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Piece = Piece;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetPieceCount_ReturnValue = CallFunc_GetPieceCount_ReturnValue;
	Parms.CallFunc_GetCompositePiece_ReturnValue = CallFunc_GetCompositePiece_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetPieceData_OutPieceData = CallFunc_GetPieceData_OutPieceData;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddPieceHealthToOwningStructure_ReturnValue = CallFunc_AddPieceHealthToOwningStructure_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureCompositeComponent.BP_StructureCompositeComponent_C.K2_OnRepCompositePieces
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_StructureCompositeComponent_C::K2_OnRepCompositePieces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositeComponent_C", "K2_OnRepCompositePieces");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositeComponent.BP_StructureCompositeComponent_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_StructureCompositeComponent_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositeComponent_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureCompositeComponent.BP_StructureCompositeComponent_C.ExecuteUbergraph_BP_StructureCompositeComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   K2Node_DynamicCast_AsBP_Structure_Composite                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureCompositeComponent_C::ExecuteUbergraph_BP_StructureCompositeComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureCompositeComponent_C", "ExecuteUbergraph_BP_StructureCompositeComponent");

	Params::UBP_StructureCompositeComponent_C_ExecuteUbergraph_BP_StructureCompositeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Composite = K2Node_DynamicCast_AsBP_Structure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


