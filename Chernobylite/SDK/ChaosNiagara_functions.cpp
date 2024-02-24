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


// Class ChaosNiagara.NiagaraDataInterfaceFieldSystem
// (None)

class UClass* UNiagaraDataInterfaceFieldSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceFieldSystem");

	return Clss;
}


// NiagaraDataInterfaceFieldSystem ChaosNiagara.Default__NiagaraDataInterfaceFieldSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceFieldSystem* UNiagaraDataInterfaceFieldSystem::GetDefaultObj()
{
	static class UNiagaraDataInterfaceFieldSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceFieldSystem*>(UNiagaraDataInterfaceFieldSystem::StaticClass()->DefaultObject);

	return Default;
}

}


