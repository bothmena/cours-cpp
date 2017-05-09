cmake_minimum_required(VERSION 3.6)
project(CPlusPlus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(Other_Memory_Allocation_FILES Other/MemoryAllocation/main.cpp
        Other/MemoryAllocation/Object.h Other/MemoryAllocation/Object.cpp
        Other/MemoryAllocation/OverloadedObject.h Other/MemoryAllocation/OverloadedObject.cpp)
add_executable(Other_Memory_Allocation ${Other_Memory_Allocation_FILES})

set(ObjectTest_FILES Other/ObjectTest.cpp Other/catch.hpp
        Other/MemoryAllocation/Object.h Other/MemoryAllocation/Object.cpp)
add_executable(ObjectTest ${ObjectTest_FILES})

set(OverloadedObject_FILES Other/OverloadedObjectTest.cpp Other/catch.hpp
        Other/MemoryAllocation/OverloadedObject.h Other/MemoryAllocation/OverloadedObject.cpp)
add_executable(OverloadedObjectTest ${OverloadedObject_FILES})

set(TD2_EX1_FILES TD2/EX1/main.cpp TD2/EX1/compte.h TD2/EX1/compte.cpp
        TD3/Bibliotheque/main.cpp TD3/Bibliotheque/Ouvrage.cpp
        TD3/Bibliotheque/Ouvrage.h TD3/Bibliotheque/Bibliotheque.cpp
        TD3/Bibliotheque/Bibliotheque.h Test/TestUn/Produit.cpp Test/TestUn/Produit.h)
add_executable(TD2_EX1 ${TD2_EX1_FILES})

set(TD2_EX2_FILES TD2/EX2/main.cpp TD2/EX2/notes.h TD2/EX2/notes.cpp)
add_executable(TD2_EX2 ${TD2_EX2_FILES})

set(TD2_EX3_FILES TD2/EX3/main.cpp TD2/EX3/abonne.h TD2/EX3/abonne.cpp
        TD2/EX3/operateur.h TD2/EX3/operateur.cpp )
add_executable(TD2_EX3 ${TD2_EX3_FILES})

set(TD3_Ecole_FILES TD3/Ecole/main.cpp TD3/Ecole/Etudiant.cpp TD3/Ecole/Etudiant.hpp
        TD3/Ecole/Date.cpp TD3/Ecole/Date.hpp TD3/Ecole/Ecole.cpp TD3/Ecole/Ecole.hpp)
add_executable(TD3_Ecole ${TD3_Ecole_FILES})

set(TD3_Evenement_FILES TD3/Evenement/main.cpp TD3/Ecole/Date.cpp TD3/Ecole/Date.hpp
        TD3/Evenement/Evenement.cpp TD3/Evenement/Evenement.h TD3/Evenement/EventList.cpp
        TD3/Evenement/EventList.h)
add_executable(TD3_Evenement ${TD3_Evenement_FILES})

set(TD3_Bibliotheque_FILES TD3/Bibliotheque/main.cpp TD3/Bibliotheque/Ouvrage.cpp
        TD3/Bibliotheque/Ouvrage.h TD3/Bibliotheque/Bibliotheque.cpp
        TD3/Bibliotheque/Bibliotheque.h)
add_executable(TD3_Bibliotheque ${TD3_Bibliotheque_FILES})

set(TD4_Banque_FILES TD4/Banque/main.cpp TD4/Banque/Banque.cpp TD4/Banque/Banque.h
        TD4/Banque/Compte.cpp TD4/Banque/Compte.h TD4/Banque/CompteCourant.cpp
        TD4/Banque/CompteCourant.h TD4/Banque/CompteEpargne.cpp TD4/Banque/CompteEpargne.h)
add_executable(TD4_Banque ${TD4_Banque_FILES})

set(Test_Un_FILES  Test/TestUn/main.cpp Test/TestUn/Produit.cpp Test/TestUn/Produit.h
        Test/TestUn/Panier.cpp Test/TestUn/Panier.h)
add_executable(Test_Un ${Test_Un_FILES})

set(Test2_VB_FILES  Test/Test2_VB/main.cpp Test/Test2_VB/Coupable.cpp
        Test/Test2_VB/Coupable.h Test/Test2_VB/Terroriste.cpp
        Test/Test2_VB/Terroriste.h Test/Test2_VB/BaseCriminal.cpp
        Test/Test2_VB/BaseCriminal.h)
add_executable(Test2_VB ${Test2_VB_FILES})

set(Overload_FILES  Overload/main.cpp Overload/Point.cpp Overload/Point.h)
add_executable(Overload ${Overload_FILES})

set(Revision_FILES  Revision/main.cpp Revision/Ressource.cpp Revision/Ressource.h Revision/Cours.cpp Revision/Cours.h Revision/Exercice.cpp Revision/Exercice.h Revision/Site.cpp Revision/Site.h)
add_executable(Revision ${Revision_FILES})
