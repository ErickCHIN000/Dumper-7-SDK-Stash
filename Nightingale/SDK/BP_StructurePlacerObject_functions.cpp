#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructurePlacerObject.BP_StructurePlacerObject_C
// (None)

class UClass* UBP_StructurePlacerObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructurePlacerObject_C");

	return Clss;
}


// BP_StructurePlacerObject_C BP_StructurePlacerObject.Default__BP_StructurePlacerObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructurePlacerObject_C* UBP_StructurePlacerObject_C::GetDefaultObj()
{
	static class UBP_StructurePlacerObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructurePlacerObject_C*>(UBP_StructurePlacerObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructurePlacerObject.BP_StructurePlacerObject_C.GetPlacementMaterial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback PlacementData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UMaterialInstance*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetPlacementMaterial_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UMaterialInstance* UBP_StructurePlacerObject_C::GetPlacementMaterial(class UObject* Structure, struct FStructurePlacementFeedback& PlacementData, class UMaterialInstance* CallFunc_GetPlacementMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructurePlacerObject_C", "GetPlacementMaterial");

	Params::UBP_StructurePlacerObject_C_GetPlacementMaterial_Params Parms{};

	Parms.Structure = Structure;
	Parms.PlacementData = PlacementData;
	Parms.CallFunc_GetPlacementMaterial_ReturnValue = CallFunc_GetPlacementMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


