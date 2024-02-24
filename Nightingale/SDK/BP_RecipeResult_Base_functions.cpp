#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RecipeResult_Base.BP_RecipeResult_Base_C
// (None)

class UClass* UBP_RecipeResult_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RecipeResult_Base_C");

	return Clss;
}


// BP_RecipeResult_Base_C BP_RecipeResult_Base.Default__BP_RecipeResult_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RecipeResult_Base_C* UBP_RecipeResult_Base_C::GetDefaultObj()
{
	static class UBP_RecipeResult_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RecipeResult_Base_C*>(UBP_RecipeResult_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RecipeResult_Base.BP_RecipeResult_Base_C.CanExecuteAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_RecipeResult_Base_C::CanExecuteAction(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_Base_C", "CanExecuteAction");

	Params::UBP_RecipeResult_Base_C_CanExecuteAction_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_Base.BP_RecipeResult_Base_C.CanProcessData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_RecipeResult_Base_C::CanProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_Base_C", "CanProcessData");

	Params::UBP_RecipeResult_Base_C_CanProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_Base.BP_RecipeResult_Base_C.ExecuteAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UItemProcessingDataAsset*> UBP_RecipeResult_Base_C::ExecuteAction(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_Base_C", "ExecuteAction");

	Params::UBP_RecipeResult_Base_C_ExecuteAction_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_Base.BP_RecipeResult_Base_C.ProcessData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UItemProcessingDataAsset*> UBP_RecipeResult_Base_C::ProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_Base_C", "ProcessData");

	Params::UBP_RecipeResult_Base_C_ProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


