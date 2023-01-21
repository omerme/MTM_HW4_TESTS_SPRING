//
// Created by alex on 1/19/23.
//

#include "Wizard.h"

Wizard::Wizard(const std::string& name): Player(name){}

void Wizard::heal(int addedHP)
{
    m_HP = (m_HP+ DOUBLE*addedHP>=m_maxHP) ? m_maxHP : m_HP+ DOUBLE*addedHP;
}

std::string Wizard::getJob() const
{
    return "Wizard";
}
