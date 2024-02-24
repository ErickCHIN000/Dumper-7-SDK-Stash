#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// (None)

class UClass* UNiagaraDataInterfaceChaosDestruction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceChaosDestruction");

	return Clss;
}


// NiagaraDataInterfaceChaosDestruction ChaosNiagara.Default__NiagaraDataInterfaceChaosDestruction
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceChaosDestruction* UNiagaraDataInterfaceChaosDestruction::GetDefaultObj()
{
	static class UNiagaraDataInterfaceChaosDestruction* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceChaosDestruction*>(UNiagaraDataInterfaceChaosDestruction::StaticClass()->DefaultObject);

	return Default;
}

}


