#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_SchematicInterfaces.BPI_SchematicInterfaces_C
// (None)

class UClass* IBPI_SchematicInterfaces_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_SchematicInterfaces_C");

	return Clss;
}


// BPI_SchematicInterfaces_C BPI_SchematicInterfaces.Default__BPI_SchematicInterfaces_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_SchematicInterfaces_C* IBPI_SchematicInterfaces_C::GetDefaultObj()
{
	static class IBPI_SchematicInterfaces_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_SchematicInterfaces_C*>(IBPI_SchematicInterfaces_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_SchematicInterfaces.BPI_SchematicInterfaces_C.GetFuelComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_StructureFuelComponent_C*FuelComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_SchematicInterfaces_C::GetFuelComponent(class UBP_StructureFuelComponent_C** FuelComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SchematicInterfaces_C", "GetFuelComponent");

	Params::IBPI_SchematicInterfaces_C_GetFuelComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FuelComponent != nullptr)
		*FuelComponent = Parms.FuelComponent;

}


// Function BPI_SchematicInterfaces.BPI_SchematicInterfaces_C.GetInventoryContainerInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RequestingActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>ContainerInterface                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SchematicInterfaces_C::GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SchematicInterfaces_C", "GetInventoryContainerInterface");

	Params::IBPI_SchematicInterfaces_C_GetInventoryContainerInterface_Params Parms{};

	Parms.RequestingActor = RequestingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerInterface != nullptr)
		*ContainerInterface = Parms.ContainerInterface;

}

}


