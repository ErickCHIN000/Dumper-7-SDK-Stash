#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_GetComponentInterfaces.BPI_GetComponentInterfaces_C
class IBPI_GetComponentInterfaces_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_GetComponentInterfaces_C* GetDefaultObj();

	void GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface);
	void GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface);
};

}


