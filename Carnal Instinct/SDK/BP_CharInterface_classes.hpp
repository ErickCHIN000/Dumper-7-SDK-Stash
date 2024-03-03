#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_CharInterface.BP_CharInterface_C
class IBP_CharInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_CharInterface_C* GetDefaultObj();

	void Exit_Horse();
	void SetOnLeft_(bool OnLeft_);
	void SetMountHorse(class AHorseBP_C* Mount);
	void Set_Transport_Type(enum class ETransportType TransportType);
	void Get_Transport_Type(enum class ETransportType* TransportType);
	void Mount_Horse_Right();
	void Mount_Horse_Left();
};

}


