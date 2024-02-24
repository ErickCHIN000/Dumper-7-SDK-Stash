#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_LightSlotAttachInfoProvider.BPI_LightSlotAttachInfoProvider_C
class IBPI_LightSlotAttachInfoProvider_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_LightSlotAttachInfoProvider_C* GetDefaultObj();

	void GetLightSlotAttachPoint(enum class ELightSlotAttachPoint* AttachPoint);
};

}


