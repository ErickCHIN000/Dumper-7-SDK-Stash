#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PDA_Menu_Owner_Interface.PDA_Menu_Owner_Interface_C
class IPDA_Menu_Owner_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPDA_Menu_Owner_Interface_C* GetDefaultObj();

	void ForceBoard(int32 Index);
	void GetCurrentlySelectedIndex(int32* Index);
};

}


