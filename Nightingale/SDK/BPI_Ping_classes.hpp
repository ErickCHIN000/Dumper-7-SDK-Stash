#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Ping.BPI_Ping_C
class IBPI_Ping_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Ping_C* GetDefaultObj();

	void GetDefaultActionStationType(enum class Enum_ActionStationType* ActionStationType);
	void GetPingObjectType(enum class E_PingObjectType* PingObjectType, class FName* DataTableRowName);
};

}


